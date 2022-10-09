// definition : a function that takes in a function as an argument or returns a fucntion is known as Higher Order Function
// it is also known as Functional Programming

// x here is a callback function
function x(){
    console.log("bkchodi");
}

// here function y is a higher order function
function y(x){
    x();
}

// another example

const radius = [2, 3, 4, 5];
const calculateArea = function (radius){
    const output = [];
    for(let i = 0 ; i < radius.length ; i++)
    {
        output.push(Math.PI * radius[i] * radius[i]);
    }
    return output;
};

console.log("calculated area is : ", calculateArea(radius));


// but what if we want to calculate the circumference, diameter, area in the same program- we have twqo options - either we can copy and write whole logic at the same time or we can make a gnereic function which takes in both the logic as well as the radius
// kul mila k - it follows dry principle


// beauty of functional programming is that we break different wroks of the code in the form of functions

// in interviews we are expected to write this type of code


// logic for area
const area = function(radius){
    return Math.PI * radius * radius
}
// logic for perimeter
const perimeter = function(radius){
    return 2 * Math.PI * radius;
}

// logic for calculation of diameter
const diameter = function (radius){
    return 2 * radius;
}
const calculate = function(radius, logic){
    const output = [];
    for( let i = 0; i < radius.length ; i ++){
        output.push(logic(radius[i]));
    }
    return output;
}


// the above function is similar(not exactly) as map
console.log(radius.map(area));


console.log(calculate(radius, area));
console.log(calculate(radius, perimeter));
console.log(calculate(radius, diameter));



// now we try to write exactly similar as map
// i.e this is a kind of polyfill for a map
Array.prototype.calculate = function (logic){
    const output = [];
    // here "this" points to radius
    for( let i = 0; i < this.length; i++){
        output.push(logic(this[i]));
    }
    return output;
};

console.log(radius.calculate(area));