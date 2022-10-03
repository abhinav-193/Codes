// map function is a higher order function
// it always returns an array
const arr = [3, 5, 6, 8, 3];

// double of each element of the array: 6 , 10 , 12, 16, 6
// triple of each element of the array: 9 , 15 , 18, 24, 9
// binary of each element of the array:  '11', '101', '110', '1000', '11'

// synatax:
// array_name.map(function_name)

const double = function(x){
    return 2 * x;
}

const triple = function(x){
    return 3 * x;
}

const toBinary = function(x){
    return x.toString(2);
}

// method to convert to string

// let x= 2
// console.log(x.toString(2));


console.log(arr.map(double));
console.log(arr.map(triple));
console.log(arr.map(toBinary));

// another way of writing
const output1 = arr.map(function(x){
    return x.toString(2);
})
console.log(output1);

// another way of writing
const output2 = arr.map((x)=>{
    return x.toString(2);
})
console.log(output2);

// another way of writing
const output3 = arr.map((x)=>x.toString(2))
console.log(output3);