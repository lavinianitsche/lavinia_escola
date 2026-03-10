alert("programa para verificar o fatorial de um número");
let numero = prompt("digite um numero: ");
let fatorial = 1
let contador = numero;

while (contador > 1) {
  fatorial *= contador;

  contador--
}

console.log("O fatorial é: " + fatorial);
alert("O fatorial é: " + fatorial);