document.addEventListener('DOMContentLoaded', function() {
    // Elementos do DOM
    const formServico = document.getElementById('form-servico');
    const btnLimpar = document.getElementById('btn-limpar');
    const listaServicos = document.getElementById('lista-servicos');
    
    // Array para armazenar os serviços cadastrados
    let servicos = JSON.parse(localStorage.getItem('servicos')) || [];
    
    // Função para exibir os serviços cadastrados
    function exibirServicos() {
        listaServicos.innerHTML = '';
        
        if (servicos.length === 0) {
            listaServicos.innerHTML = '<p class="empty-list">Nenhum serviço cadastrado ainda.</p>';
            return;
        }
        
        // Ordenar serviços por data de cadastro (mais recente primeiro)
        servicos.sort((a, b) => new Date(b.dataCadastro) - new Date(a.dataCadastro));
        
        servicos.forEach((servico, index) => {
            const servicoElement = document.createElement('div');
            servicoElement.className = 'servico-item';
            servicoElement.innerHTML = `
                <div class="servico-info">
                    <h3>${servico.nome}</h3>
                    <p>${servico.descricao}</p>
                    <div class="servico-tags">
                        <span class="servico-tag">${servico.categoria}</span>
                        <span class="servico-tag">R$ ${parseFloat(servico.preco).toFixed(2)}</span>
                        <span class="servico-tag">${servico.duracao}</span>
                        <span class="servico-tag ${servico.status === 'ativo' ? 'ativo' : 'inativo'}">${servico.status === 'ativo' ? 'Ativo' : 'Inativo'}</span>
                    </div>
                </div>
                <div class="servico-actions">
                    <button class="btn-excluir" data-index="${index}">
                        <i class="fas fa-trash"></i> Excluir
                    </button>
                </div>
            `;
            
            listaServicos.appendChild(servicoElement);
        });
        
        // Adicionar eventos aos botões de excluir
        document.querySelectorAll('.btn-excluir').forEach(btn => {
            btn.addEventListener('click', function() {
                const index = this.getAttribute('data-index');
                excluirServico(index);
            });
        });
    }
    
    // Função para cadastrar um novo serviço
    function cadastrarServico(servico) {
        // Adiciona data de cadastro
        servico.dataCadastro = new Date().toISOString();
        
        // Adiciona ao array de serviços
        servicos.push(servico);
        
        // Atualiza o localStorage
        localStorage.setItem('servicos', JSON.stringify(servicos));
        
        // Atualiza a exibição
        exibirServicos();
        
        // Mostra mensagem de sucesso
        alert('Serviço cadastrado com sucesso!');
    }
    
    // Função para excluir um serviço
    function excluirServico(index) {
        if (confirm('Tem certeza que deseja excluir este serviço?')) {
            servicos.splice(index, 1);
            localStorage.setItem('servicos', JSON.stringify(servicos));
            exibirServicos();
        }
    }
    
    // Evento de envio do formulário
    formServico.addEventListener('submit', function(event) {
        event.preventDefault();
        
        // Obter valores do formulário
        const nomeServico = document.getElementById('nome-servico').value;
        const categoria = document.getElementById('categoria').value;
        const descricao = document.getElementById('descricao').value;
        const preco = document.getElementById('preco').value;
        const duracao = document.getElementById('duracao').value;
        const status = document.querySelector('input[name="status"]:checked').value;
        const observacoes = document.getElementById('observacoes').value;
        
        // Validar preço
        if (parseFloat(preco) <= 0) {
            alert('Por favor, insira um preço válido maior que zero.');
            return;
        }
        
        // Criar objeto do serviço
        const novoServico = {
            nome: nomeServico,
            categoria: categoria,
            descricao: descricao,
            preco: preco,
            duracao: duracao,
            status: status,
            observacoes: observacoes
        };
        
        // Cadastrar o serviço
        cadastrarServico(novoServico);
        
        // Limpar o formulário
        formServico.reset();
        
        // Restaurar o status padrão para "ativo"
        document.querySelector('input[name="status"][value="ativo"]').checked = true;
    });
    
    // Evento do botão limpar
    btnLimpar.addEventListener('click', function() {
        if (confirm('Tem certeza que deseja limpar todos os campos do formulário?')) {
            formServico.reset();
            // Restaurar o status padrão para "ativo"
            document.querySelector('input[name="status"][value="ativo"]').checked = true;
        }
    });
    
    // Exibir serviços cadastrados ao carregar a página
    exibirServicos();
    
    // Efeito visual para os campos ao focar
    const camposForm = document.querySelectorAll('input, select, textarea');
    camposForm.forEach(campo => {
        campo.addEventListener('focus', function() {
            this.parentElement.style.transform = 'translateY(-2px)';
        });
        
        campo.addEventListener('blur', function() {
            this.parentElement.style.transform = 'translateY(0)';
        });
    });
    
    // Adicionar uma animação simples ao título
    const titulo = document.querySelector('.header h1');
    titulo.style.animation = 'pulse 2s infinite';
    
    // Adicionar estilo de animação via JavaScript
    const style = document.createElement('style');
    style.textContent = `
        @keyframes pulse {
            0% { transform: scale(1); }
            50% { transform: scale(1.02); }
            100% { transform: scale(1); }
        }
        
        .servico-tag.ativo {
            background-color: #e0ffe0;
            color: #2ecc71;
        }
        
        .servico-tag.inativo {
            background-color: #ffe0e0;
            color: #e74c3c;
        }
    `;
    document.head.appendChild(style);
});