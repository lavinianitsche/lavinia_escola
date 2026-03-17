function letra() {

    let letra;

    letra = document.getElementById("letra").value;

    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u") {
        document.getElementById("result").innerHTML = "vogal minuscula";
        
    } else if (letra == "A" || letra == "E" || letra == "I" || letra == "O" || letra == "U") {
        document.getElementById("result").innerHTML = "vogal maiuscula";
    } else {
        document.getElementById("result").innerHTML = "consoante";
    }

    console.log("----------");
    console.log(letra);
    console.log("----------");
}