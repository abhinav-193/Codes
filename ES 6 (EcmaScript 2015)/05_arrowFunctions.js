// arrow functions are also called ass fat arrow functions are more concise way of writing the functions


// es5
var sum = function(){
    var a = 10;
    var b= 10;
    return a + b;
}
console.log(sum());

// ES6

const multiply = () =>{
    var a = 10;
    var b= 10;
    return a * b;
    
}
console.log(multiply());


// simpler way 
let x = 9, y = 8;
// we will write return only when we use curly braces
   const simple1 = () =>{return x + y}
// if one line of code is present, no need to write return
const simple2 = () =>x + y
console.log(simple1());
console.log(simple2());