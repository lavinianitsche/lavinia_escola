const listaAlunos = [];

function gerenciarTurma() {

    const name = document.getElementById('nome');
    const tri_um = document.getElementById('notau');
    const tri_dois = document.getElementById('notad');
    const tri_tres = document.getElementById('notat');
    const resposta = document.getElementById('resposta');
    const relatorio = document.getElementById('relatorio');

    let nome = name.value;
    let n1 = parseFloat(tri_um.value) || 0;
    let n2 = parseFloat(tri_dois.value) || 0;
    let n3 = parseFloat(tri_tres.value) || 0;
    let continuar = resposta.value.toLowerCase().charAt(0);

    let media = (n1 + n2 + n3) / 3;
    
    const alunoData = {
        nome: nome,
        media: media.toFixed(2)
    };

    // console.log("objeto: ", alunoData.nome);
    // console.log("objeto: ", alunoData.media);

    listaAlunos.push(alunoData); // adiciona o aluno no vetor
    // console.log(listaAlunos[0]);

    if (continuar === 's') {
        limparCampos();
        relatorio.innerHTML = `<p style="color: green;"><strong>aluno ${nome} adicionado ao sistema!</strong></p>`;
    } else if (continuar === 'n') {
        exibirRelatorioFinal();
        desativarEntradas();
    }
}

function exibirRelatorioFinal() {
    const relatorio = document.getElementById('relatorio');
    relatorio.innerHTML = "<h3>relatório final da turma:</h3>";
    
    listaAlunos.forEach((aluno, index) => {
        relatorio.innerHTML += `
            <p>${index + 1}. <strong>nome:</strong> ${aluno.nome} | 
            <strong>média:</strong> ${aluno.media}</p>
        `;
    });

    relatorio.innerHTML += `<p style="color: red;"><strong>status: turma finalizada.</strong></p>`;
}

function desativarEntradas() {
    document.querySelector('button').disabled = true;
}

function limparCampos() {
    document.getElementById('nome').value = "";
    document.getElementById('notau').value = "";
    document.getElementById('notad').value = "";
    document.getElementById('notat').value = "";
    document.getElementById('resposta').value = "";
    document.getElementById('nome').focus();
}
