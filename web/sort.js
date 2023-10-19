// ordena os elementos do próprio array e retorna o array ordenado. Seu funcionamento pode ser modificado a partir de uma função recebida como parâmetro

/*
Se o retorno for:
    < 0: a para um índice anterior a b
    > 0: b um índice anterior a a. 
    == 0: a e b não mudam em relação um ao outro
    

Caso o retorno for diferente de inteiro, ou seja, um resultado inconsistente, a ordenação é indefinida.
*/

let numbers = [26, 12, 2003, 4, 5, 19, 234, 1765, 2873];
numbers.sort((a, b) => a - b);
console.log(numbers);
numbers.sort((a, b) => b - a);
console.log(numbers);


let names = ["Antônio", "Liélia", "John", "Pedro", "Amanda", "Anthony", "Thiago", "Lara"];

names.sort((a, b) => {
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
});

console.log(names);

let cars = [
    {
      brand: 'BMW',
      year: 2017,
    },
    {
      brand: 'Ferrari',
      year: 2019,
    },
    {
      brand: 'Volkswagen',
      year: 2015,
    }
];


cars.sort((a, b) => b.year - a.year);
console.log(cars);