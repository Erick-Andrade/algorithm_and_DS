// https://momentjs.com/

const moment = require("moment")

let date = moment().format("DD/MM/YYY, h:mm:ss a");
console.log(date);

// Adicionando 1 dia ao dia atual e formatando em forma de calendário
var dateAdd = moment().add(1, 'days').calendar();      

// Subtraindo 20 horas a hora atual e formatando em forma de calendário
var dateSub = moment().subtract(20, 'hours').calendar();      

console.log(dateAdd); // Imprimindo a data formatada
console.log(dateSub); // Imprimindo a data formatada