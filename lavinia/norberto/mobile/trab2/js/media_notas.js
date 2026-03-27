function calcular() {

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

    if (media >= 60) {
        document.getElementById("result").innerHTML = media + " aprovado";
    } else {
        document.getElementById("result").innerHTML = media + " reprovado";
    }

    console.log(turma);
    console.log(nome);
    console.log(media);

}

function continuar() {
    
}