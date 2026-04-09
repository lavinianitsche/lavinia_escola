function calcular() {
    
    let nome;
    let media;
    let tri_um;
    let tri_dois;
    let tri_tres;
    let resposta;

    nome = document.getElementById("nome").value;
    console.log("aluno: " + nome);
    tri_um = Number(document.getElementById("notau").value);
    console.log("1º tri: " + tri_um);
    tri_dois = Number(document.getElementById("notad").value);
    console.log("2º tri: " + tri_dois);
    tri_tres = Number(document.getElementById("notat").value);
    console.log("3º tri: " + tri_tres);

    media = (tri_um + tri_dois + tri_tres) / 3
        
    let situacao = "";
    
    if (media >= 60) {
        situacao = "aprovado";
    } else {
        situacao = "reprovado";
    }
        
    document.getElementById("result").innerHTML = "aluno: " + nome + " - media final: " + media.toFixed(0) + " - " + situacao;
    // document.getElementById("result").innerHTML = "media final: " + media.toFixed(1) + " - " + situacao;
    
    console.log(" ");
    console.log("aluno: " + nome);
    console.log("media final: " + media.toFixed(0));
    console.log(situacao);

    resposta = document.getElementById("resposta").value;

    if (resposta == "sim"){
        console.log(resposta[0]);
    } else {
        console.log(resposta[0]);
    }

}