// retorna somente um valor que foi modificado durante toda a iteração. 
// reduce(função, valInicial)
// Função: valor atual e o valor acumulativo (ou anterior)
// ValInicial: valor inicial da variável acumulative

const numbers = [0, 1, 2, 3, 4, 5, 6];
const sum = numbers.reduce((number, acumulative) => number + acumulative, 0);
console.log(sum);