// unlike its name "reduce" function does not reduce anything

// "reduce" function is to take out a single value out of array of elements

const arr = [5, 3, 2, 6, 7];

// writing in the non functional way first

// sum of elements of the array
function findSum(x){
    let sum = 0;
    for(let i = 0 ; i < arr.length ; i++){
        sum = sum + x[i];
    }
    return sum;
}
console.log(findSum(arr));

// syntax of reduce function

// array_name.reduce(function_name, initial_value_of_acc)

// function name will contain:

// function(acc , curr){.....}

// here acc plays the same role as sum, where as curr represents the current value(i.e element) in the array

const output = arr.reduce(function(acc, curr){
    acc = acc + curr;
    return acc;
}, 0)

console.log("sum using reduce function is :",output)


// ----------------------

// now trying to find out the max value among all the element in the array

// without using functional javascript
function maxCheck(x){
    let max = 0;
    for( i = 0 ; i< x.length ; i++){
        if(x[i] > max){
            max = x[i];
        }
    }
    return max;
}
console.log("the max among all the element is : ", maxCheck(arr));


// now by using functional javascript
const outputMax = arr.reduce(function(max, curr){
    if( curr > max){
        max = curr;
        }
        return max;
}, 0);

console.log("the max value using reduce function is :" , outputMax);