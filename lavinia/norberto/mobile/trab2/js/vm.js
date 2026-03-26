function calcular_vm() {

    let distancia;
    let tempo;
    let resultado;

    
    distancia = document.getElementById("distancia").value;
    tempo = document.getElementById("tempo").value;
    
    resultado = distancia / tempo;

    document.getElementById("result").innerHTML = resultado + " km/h";


    /*if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u") {
        document.getElementById("result").innerHTML = "vogal minuscula";
        
    } else if (letra == "A" || letra == "E" || letra == "I" || letra == "O" || letra == "U") {
        document.getElementById("result").innerHTML = "vogal maiuscula";
    } else {
        document.getElementById("result").innerHTML = "consoante";
    }
        
    console.log("----------");
    console.log(letra);
    console.log("----------");
    
    // comentar = ctrl k c
    // descomentar = ctrl k u
    */
}
