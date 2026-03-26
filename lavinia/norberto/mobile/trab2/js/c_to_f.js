function convert_temp() {

    let celcius;
    let resultado;
    const MULT = 1.8;

    celcius = document.getElementById("celsius").value;
    
    resultado = celcius * MULT + 32;
    // resultado = (9 * celcius + 160) / 5;

    document.getElementById("result").innerHTML = resultado + "° fahrenheit";

}