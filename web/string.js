let s1 = "ErIcK anDrade";
let s2 = 'Erick Andrade';
let s3 = `Erick
Andrade`;

console.log(s1);
console.log(s2);
console.log(s3);

console.log(typeof(s1), typeof(s2), typeof(s3));

// métodos/atributos

let size = s1.length
let i1 = s1.indexOf("a");
let i2 = s1.indexOf("Não tem");
let lower = s1.toLowerCase();
let upper = s1.toUpperCase();
let newString = s1.replace("a", "mudeii");

console.log(size);
console.log(s1);
console.log(i1, i2);
console.log(lower);
console.log(upper);
console.log(newString);