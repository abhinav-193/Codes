// swapping two variables in array without using third variables
let a = 5;
let b = 10;
console.log(`value of a is ${a} and b is ${b} before swapping`);
[a, b] = [b, a];
console.log(`value of a is ${a} and b is ${b} after changing`);