// l6 8. O Máximo Divisor Comum (MDC) entre dois números naturais (números inteiros positivos) é o maior número natural que divide
// ambos. Desenvolva um programa que leia dois números inteiros positivos X e Y e escreva seu MDC.

let mdc;
const x = Number(prompt("digite o primeiro numero"));
const y = Number(prompt("digite o segundo numero"));

for (let i = 1; i <= x && i <= y; i++) {

    if( x % i == 0 && y % i == 0) {
        mdc = i;
    }
}

alert('mdc de ' + x + ' e ' + y + ' é ' + mdc);