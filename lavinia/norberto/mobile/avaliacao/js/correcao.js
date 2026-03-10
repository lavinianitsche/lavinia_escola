function calcular() {

    let nota_um, nota_dois, nota_tres, nota_quatro, calculo, media;

    nota_um = Number(document.getElementById("nota_um").value);
    nota_dois = Number(document.getElementById("nota_dois").value);
    nota_tres = Number(document.getElementById("nota_tres").value);
    nota_quatro = Number(document.getElementById("nota_quatro").value);

    calculo = nota_um + nota_dois + nota_tres + nota_quatro;
    media = calculo / 4;

    console.log("----------");
    console.log("notas:");
    console.log(nota_um);
    console.log(nota_dois);
    console.log(nota_tres);
    console.log(nota_quatro);
    console.log(calculo);
    console.log("a media final é: " + media);
    console.log("----------");

}