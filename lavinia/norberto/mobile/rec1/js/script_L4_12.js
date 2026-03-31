// 11. Elabore um algoritmo que leia dois números inteiros diferentes: ini e fim , sendo que ini deve ser menor que fim . Escreva em
// ordem crescente todos os números inteiros entre ini e fim , inclusive eles mesmos.

// l4 12. Repita a questão anterior, desta vez presumindo que ini pode ou não ser maior que fim . Se ini for maior que fim , siga a
// ordem decrescente.

let ini = Number(prompt("digite o ini"));
let fim = Number(prompt("digite o fim"));

while (ini > fim){
    
    if (ini > fim){
        ini--
        console.log(ini);
        console.log(fim);
    } else {
        ini++
        console.log(ini);
        console.log(fim);
    }
}