// require: responsável por carregar módulos com outros códigos JavaScript para realizar certas funcionalidades.
// como um #include do c
// usamos const


// módulo fs: vem padrão com o Node.js e é responsável pela leitura de arquivos em seu computador. Seja em .txt, .csv, entre outros tipos.

const fs = require("fs");

let leitura = fs.readFileSync("entrada.txt", "utf-8");
console.log(leitura);


// le os valores da própria linha de comando. Esse comando permitirá nosso código ler o arquivo passado pelo pipe (método utilizado pelos Juizes Online para enviar dados para o programa).
/*
let leitura2 = fs.readFileSync(0, "utf-8"); 
console.log(leitura2)
*/