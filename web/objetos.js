// objetos são como a de orientação a objetos, podendendo ter atributos (ou propriedade ) e/ou métodos
// object literal notation: é normalmente usada para objetos que só serão usados uma vez (já que não estamos criando uma classe para instânciar objetos).

let user = {};

user.nome = "Erick Andrade";
user.idade = 20;

console.log(user);

let user2 = {
    nome: "João",
    idade: 40
};

console.log(user2);
console.log(user2.nome);
console.log(user2.data);
console.log(user2);
console.log(user2["data"]);
console.log(user2);

let property = "nome";

if (user2[property] !== undefined) {
    console.log("Exist!");
}


// percorrendo
for (let property in user) {
    console.log(user2[property]);
}