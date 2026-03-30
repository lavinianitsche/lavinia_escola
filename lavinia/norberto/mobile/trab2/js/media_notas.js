function calcular() {
    
    let continuar = true;

    
    let turma;
    let nome;
    let media;
    let bi_um;
    let bi_dois;
    let bi_tres;
    let bi_quatro;

    

    turma = document.getElementById("turma").value;
    nome = document.getElementById("nome").value;
    bi_um = Number(document.getElementById("notau").value);
    bi_dois = Number(document.getElementById("notad").value);
    bi_tres = Number(document.getElementById("notat").value);
    bi_quatro = Number(document.getElementById("notaq").value);
    
    media = (bi_um + bi_dois + bi_tres + bi_quatro) / 4
        
    let situacao = "";
    
    if (media >= 60) {
        situacao = "aprovado";
    } else {
        situacao = "reprovado";
    }
        
    document.getElementById("result").innerHTML = "aluno: " + nome + " - media: " + media + " - " + situacao;
    
    console.log(turma);
    console.log(nome);
    console.log(media);
    console.log(situacao);

    continuar = confirm("deseja calcular a média de outro aluno?");

    if (continuar) {
        document.getElementById("turma").value = "";
        document.getElementById("nome").value = "";
        document.getElementById("notau").value = "";
        document.getElementById("notad").value = "";
        document.getElementById("notat").value = "";
        document.getElementById("notaq").value = "";
        document.getElementById("result").innerHTML = "";
    } else {
        alert("calculo finalizado");
    }

}

