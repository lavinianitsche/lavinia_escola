// Array para armazenar os ingredientes
let ingredientes = [];

// Função para atualizar a lista exibida na tela
// function atualizarLista() {
//     const listaDiv = document.getElementById('listaIngredientes');
//     listaDiv.innerHTML = '';
    
//     if (ingredientes.length === 0) {
//         listaDiv.innerHTML = '<div style="text-align: center; color: #999;">Nenhum ingrediente cadastrado</div>';
//         return;
//     }
    
//     ingredientes.forEach((ingrediente, index) => {
//         const itemDiv = document.createElement('div');
//         itemDiv.innerHTML = `
//             <span>${index}. ${ingrediente}</span>
//             <button onclick="deletarPorIndice(${index})" style="background: #ff6b6b; padding: 5px 10px; font-size: 0.8rem;">✗</button>
//         `;
//         listaDiv.appendChild(itemDiv);
//     });
// }

// Função para deletar por índice (usada pelos botões da lista)
function deletarPorIndice(indice) {
    if (indice >= 0 && indice < ingredientes.length) {
        ingredientes.splice(indice, 1);
        atualizarLista();
        mostrarMensagem('crud', `Ingrediente removido com sucesso!`, 'success');
    }
}

// Função para deletar ingrediente
function deletar() {
    const indiceInput = document.getElementById('indiceIngrediente');
    const indice = parseInt(indiceInput.value.trim());
    
    if (isNaN(indice) || indiceInput.value.trim() === '') {
        mostrarMensagem('crud', 'Por favor, digite o índice do ingrediente para deletar', 'error');
        return;
    }
    
    if (indice < 0 || indice >= ingredientes.length) {
        mostrarMensagem('crud', `Índice inválido! Digite um número entre 0 e ${ingredientes.length - 1}`, 'error');
        indiceInput.value = '';
        return;
    }
    
    const removido = ingredientes.splice(indice, 1);
    mostrarMensagem('crud', `✅ Ingrediente "${removido[0]}" removido com sucesso!`, 'success');
    indiceInput.value = '';
    atualizarLista();
}

// Função para alterar ingrediente (CORRIGIDA - usando o campo indiceNovo)
function alterar() {
    const novoNomeInput = document.getElementById('novoNome');
    const indiceNovoInput = document.getElementById('indiceNovo');
    const novoNome = novoNomeInput.value.trim();
    const indice = parseInt(indiceNovoInput.value.trim());
    
    if (novoNome === '') {
        mostrarMensagem('crud', 'Por favor, digite o novo nome do ingrediente', 'error');
        return;
    }
    
    if (isNaN(indice) || indiceNovoInput.value.trim() === '') {
        mostrarMensagem('crud', 'Por favor, digite o índice do ingrediente para alterar', 'error');
        return;
    }
    
    if (indice < 0 || indice >= ingredientes.length) {
        mostrarMensagem('crud', `Índice inválido! Digite um número entre 0 e ${ingredientes.length - 1}`, 'error');
        indiceNovoInput.value = '';
        return;
    }
    
    // Verificar se o novo nome já existe (exceto se for o mesmo ingrediente)
    const existe = ingredientes.find((ing, i) => i !== indice && ing.toLowerCase() === novoNome.toLowerCase());
    if (existe) {
        mostrarMensagem('crud', `O ingrediente "${novoNome}" já está cadastrado!`, 'error');
        novoNomeInput.value = '';
        indiceNovoInput.value = '';
        return;
    }
    
    const nomeAntigo = ingredientes[indice];
    ingredientes[indice] = novoNome;
    mostrarMensagem('crud', `✅ Ingrediente alterado de "${nomeAntigo}" para "${novoNome}"!`, 'success');
    novoNomeInput.value = '';
    indiceNovoInput.value = '';
    atualizarLista();
}
