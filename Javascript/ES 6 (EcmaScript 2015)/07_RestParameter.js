// Rest parameter is an improved way to handle function parameter, allowing us to more easily handle various input as parameters in a function. The rest parameter syntax allows us to represent an indefinite number of arguments as an array


// ES 5

function sum(a,b){
    console.log(a+b);
}
// rest of the parameters are ignored by the function
sum(1,2,3,4,5,6)

// ES6
function sumES(...inputs){
    // console.log(a+b+c+d+e+f);
    console.log(inputs);
    // output : [1,2,3,4,5,6]
    console.log(...inputs);
    // output : 1 2 3 4 5 6
    let total = 0;
    //  for sum
    for(let i of inputs){
        total = total + i;
    }
    console.log(total);
}
// rest of the parameters are ignored by the function
sumES(1,2,3,4,5,6)