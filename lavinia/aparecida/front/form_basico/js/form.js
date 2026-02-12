// script.js
document.addEventListener('DOMContentLoaded', function() {
    const formCadastro = document.getElementById('formCadastro');
    const successModal = document.getElementById('successModal');
    const closeModal = document.getElementById('closeModal');
    
    // Máscara para telefone
    const telefoneInput = document.getElementById('telefone');
    telefoneInput.addEventListener('input', function(e) {
        let value = e.target.value.replace(/\D/g, '');
        
        if (value.length > 10) {
            value = value.replace(/^(\d{2})(\d{5})(\d{4}).*/, '($1) $2-$3');
        } else if (value.length > 6) {
            value = value.replace(/^(\d{2})(\d{4})(\d{0,4}).*/, '($1) $2-$3');
        } else if (value.length > 2) {
            value = value.replace(/^(\d{2})(\d{0,5})/, '($1) $2');
        } else if (value.length > 0) {
            value = value.replace(/^(\d*)/, '($1');
        }
        
        e.target.value = value;
    });
    
    // Validação do formulário
    formCadastro.addEventListener('submit', function(e) {
        e.preventDefault();
        
        // Limpar mensagens de erro anteriores
        clearErrorMessages();
        
        let isValid = true;
        
        // Validação do nome
        const nome = document.getElementById('nome').value.trim();
        if (nome.length < 3) {
            showError('nomeError', 'Nome deve ter pelo menos 3 caracteres');
            isValid = false;
        }
        
        // Validação do email
        const email = document.getElementById('email').value.trim();
        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        if (!emailRegex.test(email)) {
            showError('emailError', 'Digite um email válido');
            isValid = false;
        }
        
        // Validação da senha
        const senha = document.getElementById('senha').value;
        if (senha.length < 6) {
            showError('senhaError', 'Senha deve ter pelo menos 6 caracteres');
            isValid = false;
        }
        
        // Validação da confirmação de senha
        const confirmarSenha = document.getElementById('confirmarSenha').value;
        if (senha !== confirmarSenha) {
            showError('confirmarSenhaError', 'As senhas não coincidem');
            isValid = false;
        }
        
        // Validação dos termos
        const termos = document.getElementById('termos').checked;
        if (!termos) {
            showError('termosError', 'Você deve aceitar os termos para continuar');
            isValid = false;
        }
        
        // Se o formulário for válido, mostra o modal de sucesso
        if (isValid) {
            // Simulação de envio de dados
            setTimeout(() => {
                successModal.classList.add('active');
                // Limpar o formulário
                formCadastro.reset();
            }, 500);
        }
    });
    
    // Fechar modal
    closeModal.addEventListener('click', function() {
        successModal.classList.remove('active');
    });
    
    // Fechar modal clicando fora dele
    successModal.addEventListener('click', function(e) {
        if (e.target === successModal) {
            successModal.classList.remove('active');
        }
    });
    
    // Funções auxiliares
    function showError(elementId, message) {
        const errorElement = document.getElementById(elementId);
        errorElement.textContent = message;
    }
    
    function clearErrorMessages() {
        const errorElements = document.querySelectorAll('.error-message');
        errorElements.forEach(element => {
            element.textContent = '';
        });
    }
    
    // Validação em tempo real para a confirmação de senha
    const confirmarSenhaInput = document.getElementById('confirmarSenha');
    const senhaInput = document.getElementById('senha');
    
    confirmarSenhaInput.addEventListener('input', function() {
        const senha = senhaInput.value;
        const confirmarSenha = confirmarSenhaInput.value;
        
        if (confirmarSenha && senha !== confirmarSenha) {
            showError('confirmarSenhaError', 'As senhas não coincidem');
        } else if (confirmarSenha && senha === confirmarSenha) {
            document.getElementById('confirmarSenhaError').textContent = '';
        }
    });
});