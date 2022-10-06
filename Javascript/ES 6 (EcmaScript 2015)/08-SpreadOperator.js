// spread operator allows an iterablew to expand in places where 0+ arguments are expected. It is mostly used in "variable array" where there is more than values are expected. It allows us the previlege to obtain a list of parameters from an array.Syntax of spread operator is same as Rest Parameter but it" works completely opposite of it"

// ...

// 1st use
// replaces apply() method which we use in ES5
// ES6
function sum(a,b,c){
    console.log(a+b+c);
}
let arrayVal = [1,9,3];
console.log(arrayVal);
// output : 1 9 3
sum(...arrayVal);

// 2nd use
// replaces concatenation function concat()
let arr1 = [1,2,3]
let arr2 = [4,5,6]

 console.log(arr1.concat(arr2));

//  inEs6
console.log("Using ES6");
console.log([...arr1,...arr2])


// 3rd use
// replaces copy() method

let arrc1 = [1,2,3];
let arrc2 = arrc1;
console.log("3rd use")
console.log(arrc2);
console.log(arrc1);

// output: [1,2,3] in both cases. f we dont want to change the value of the original array then we use the spread  operator

let arrc3 = [...arrc1 ]
let arrc4 = [...arrc1,4,5]
console.log(arrc3);
console.log(arrc4);