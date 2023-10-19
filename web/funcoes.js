// nome da função obdece os mesmos critérios da variável


//// function hoisting
function sum(a, b) {
    return a + b;
}

let result = sum(80, 2);
console.log(result);

//// Function expression

let sum2 = function(a, b) {
    return a + b;
}

result = sum2(100, 2)
console.log(result)

//// Arrow function

let sum3 = (a, b) => { // sintaxe geral
    return a + b
}

let sum4 = (a, b) => a + b; // se tiver apenas ums linha

let hello = () => "Hello"; // sem parâmetros
let msg = x => `Hello ${x}`; // apenas um parâmetro

console.log(sum3(10, 20));
console.log(sum4(10, 20));
console.log(hello());
console.log(msg("Erick"));

//// Podemos passar funções como parâmetros

let soma = (a, b) => a + b;
let mult = (a, b) => a * b;
let div = (a, b) => a / b;

let calculadora = (a, b, fun = soma) => fun(a, b);

console.log(calculadora(10, 20));
console.log(calculadora(10, 20, soma));
console.log(calculadora(10, 20, mult));
console.log(calculadora(10, 20, div));


//// Funções em objetos

let user = {
    nome: "Erick Andrade",
    idade: 20,
    informacao: function() {
        console.log(`Nome: ${this.nome}\nidade: ${this.idade}`)
    }
};

console.log(user);

user.informacao();