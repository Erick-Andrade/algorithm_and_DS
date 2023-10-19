/*
1-Estruturas condicionais: igual ao C
2-Operador de comparação: Parecida com o do C, porém, tem-se o '===' e '!==', que verifica valor e tipo
3-Estrutura de repetições: igual ao C, porém tem-se o (for..of, for..in)


*/

// 2
console.log(1 == "1");
console.log(1 === "1");
console.log(1 != "1");
console.log(1 !== "1");

// 3
numeros = [1, 2, 3, 4, 5]

for (let num of numeros){
    console.log(num)
}