// Similar com o python

let numbers = [0, 1, 2, 3, "string", true];
console.log(numbers);

numbers[0] = 10000;
console.log(numbers);


for (num of numbers) console.log(num);


// métodos/atributos

let list = [];
list.push(10);
list.push(100);
list.unshift(-32);
list.unshift(-3213);

console.log(list);

list.pop();
console.log(list);
list.shift();
console.log(list);
