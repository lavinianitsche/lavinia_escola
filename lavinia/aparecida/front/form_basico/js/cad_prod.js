// Espera o DOM carregar completamente
document.addEventListener('DOMContentLoaded', function() {
    // Elementos do DOM
    const formProduto = document.getElementById('form-produto');
    const listaProdutos = document.getElementById('lista-produtos');
    
    // Array para armazenar os produtos (em um sistema real, isso viria de um backend)
    let produtos = JSON.parse(localStorage.getItem('produtos')) || [];
    
    // Exibe os produtos salvos ao carregar a página
    exibirProdutos();
    
    // Adiciona evento de submit ao formulário
    formProduto.addEventListener('submit', function(event) {
        event.preventDefault();
        
        // Obtém os valores do formulário
        const nome = document.getElementById('nome').value;
        const categoria = document.getElementById('categoria').value;
        const preco = parseFloat(document.getElementById('preco').value);
        const quantidade = parseInt(document.getElementById('quantidade').value);
        const descricao = document.getElementById('descricao').value;
        const fornecedor = document.getElementById('fornecedor').value;
        const disponivel = document.getElementById('disponivel').checked;
        
        // Cria um objeto produto
        const produto = {
            id: Date.now(), // Usa timestamp como ID único
            nome,
            categoria,
            preco,
            quantidade,
            descricao,
            fornecedor,
            disponivel,
            dataCadastro: new Date().toLocaleDateString('pt-BR')
        };
        
        // Adiciona o produto ao array
        produtos.push(produto);
        
        // Salva no localStorage
        salvarProdutos();
        
        // Atualiza a exibição
        exibirProdutos();
        
        // Mostra mensagem de sucesso
        alert(`Produto "${nome}" cadastrado com sucesso!`);
        
        // Reseta o formulário (exceto a checkbox de disponível)
        formProduto.reset();
        document.getElementById('disponivel').checked = true;
    });
    
    // Função para salvar produtos no localStorage
    function salvarProdutos() {
        localStorage.setItem('produtos', JSON.stringify(produtos));
    }
    
    // Função para exibir produtos na lista
    function exibirProdutos() {
        // Limpa a lista
        listaProdutos.innerHTML = '';
        
        // Se não houver produtos, mostra mensagem
        if (produtos.length === 0) {
            listaProdutos.innerHTML = `
                <div class="produto-vazio">
                    <p>Nenhum produto cadastrado ainda.</p>
                    <p>Preencha o formulário acima para adicionar produtos.</p>
                </div>
            `;
            return;
        }
        
        // Ordena produtos por data (mais recentes primeiro)
        const produtosOrdenados = [...produtos].sort((a, b) => b.id - a.id);
        
        // Cria cards para cada produto
        produtosOrdenados.forEach(produto => {
            const produtoCard = document.createElement('div');
            produtoCard.className = 'produto-card';
            
            // Formata o preço como moeda brasileira
            const precoFormatado = produto.preco.toLocaleString('pt-BR', {
                style: 'currency',
                currency: 'BRL'
            });
            
            // Determina a classe de disponibilidade
            const disponivelClass = produto.disponivel ? 'produto-disponivel' : 'produto-indisponivel';
            const disponivelText = produto.disponivel ? 'Disponível' : 'Indisponível';
            
            produtoCard.innerHTML = `
                <h3>${produto.nome}</h3>
                <div class="produto-info">
                    <p><strong>Categoria:</strong> ${produto.categoria}</p>
                    <p><strong>Preço:</strong> ${precoFormatado}</p>
                    <p><strong>Quantidade:</strong> ${produto.quantidade}</p>
                    <p><strong>Fornecedor:</strong> ${produto.fornecedor || 'Não informado'}</p>
                </div>
                ${produto.descricao ? `<p class="produto-descricao">"${produto.descricao}"</p>` : ''}
                <div class="${disponivelClass}">${disponivelText}</div>
            `;
            
            listaProdutos.appendChild(produtoCard);
        });
    }
    
    // Adiciona funcionalidade ao botão de limpar
    const btnLimpar = document.querySelector('button[type="reset"]');
    btnLimpar.addEventListener('click', function() {
        if (confirm('Tem certeza que deseja limpar todos os campos do formulário?')) {
            document.getElementById('disponivel').checked = true;
        }
    });
    
    // Adiciona máscara para o campo de preço
    const campoPreco = document.getElementById('preco');
    campoPreco.addEventListener('blur', function() {
        if (this.value) {
            const valor = parseFloat(this.value);
            this.value = valor.toFixed(2);
        }
    });
});