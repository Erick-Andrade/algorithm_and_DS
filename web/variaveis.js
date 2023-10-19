// tipagem dinâmica: não há exigência na declaração do tipo da variável

/*
A regra de nomeção é parecido ao do python, porém:
    - pode-se usar $ (em qualquer posição)
    - normalmente usa-se camelCase

var
    - não precisa ser inicializada (assume undefined, caso não seja inicializada)
    - escopo: função e global
    - Permite redeclaração
let
    - não precisa ser inicializada (assume undefined, caso não seja inicializada)
    - escopo: função, global e bloco
    - Não permite redeclaração
const
    - precisa ser inicializado
    - escopo: função, global e bloco
    - Apenas para leitura
    - Não permite redeclaração
*/

/////// INICIALIZAÇÃO

var a = 8;
var b;
console.log(a, b);


////// ESCOPO
function test() {
    // todos elas tem escopo de função
    var h = 10;
}

// console.log(h);

if (true) {
    // let e const tem escopo de bloco
    let x = 10, y = 100;
    console.log(x, y)
}

// console.log(x, y);


////// (RE)DECLARAÇÃO

// var permite redeclaração
var teste1 = 10;
console.log(teste1);
var teste1 = 100;
console.log(teste1);

// let e const não
let teste2 = 100;
console.log(teste2);
//let teste2  = 1000;
//console.log(teste2);