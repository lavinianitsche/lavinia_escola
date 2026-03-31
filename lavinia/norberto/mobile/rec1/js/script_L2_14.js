// l2 14. Leia dois números inteiros x e y e escreva dentre as seguintes hipóteses a verdadeira: 1. x e y são pares; 2. x e y são ímpares;
// 3. x é par e y é ímpar; 4. x é ímpar e y é par.

alert("programa para verificar se dois números são par ou impar");
let x = Number(prompt("digite o primeiro número"));
let y = Number(prompt("digite o segundo número"));
let rx;
let ry;

if( x % 2 == 0 ) {
    rx = "par";
    console.log("par");
} else {
    rx = "impar";
    console.log("impar");
}

if( y % 2 == 0 ) {
    ry = "par";
    console.log("par"); 
} else {
    ry = "impar";
    console.log("impar");
}

alert(rx + ' e ' + ry);
