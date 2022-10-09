// The Destructuring assignment syntax is a javascript expression that makes it possible to unpack values from arrays, or properties from objects, into distinct variables.

const myProgLang = ['js', 'php', 'c', 'java','python'];

// to store the elements of the array as values in different variables

// in ES5
var top0 = myProgLang[0]
var top1 = myProgLang[1]
var top2 = myProgLang[2];

console.log(`My favourite programming language is ${top0}`);

// in ES6
let [top3, top4, top5] = myProgLang;
console.log(`My favourite programming language is ${top3}`);
// output : js

// if we want to store specific items only
let [top7,,,,topLast] = myProgLang;
console.log(`My favourite programming language is ${top7} and least favourite is ${topLast}`);