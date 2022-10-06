// math object ion ES6 introduced two functions in js
// sign() - returns 11 if number is positive, -1 if number is -ve, 0 if number is 0
// trunc() - returns the numbers before the decimal part of the number , eg : 5.55 returns 5

let number = 9;
// output : 1

// let number = -2;
// output : -1

// let number = 0;
// output : 0

// let number =-0;
// output : -0

// let number = NaN;
// output : NaN

// let number = "harshit";
// output : NaN

console.log(Math.sign(number));

console.log(`trunc() function`)
console.log(Math.trunc(5.559)) ;
console.log(Math.trunc(-5.559)) ;