const arr = [5, 1, 3, 2, 6];

// filter odd values

function isOdd(x){
    return x % 2;
}

const output = arr.filter(isOdd);
console.log("Odd values are :",output);

// filter even values

function isEven(x){
    return x % 2 === 0;
}
const output2 = arr.filter(isEven);
console.log("Even values are :", output2);

// filterng number greater than 4

function greaterThan4(x){
    return x>4;
}
const output3= arr.filter(greaterThan4);
console.log("Numbers greater than 4:", output3);


// another way of writing the code
const output4 = arr.filter((x)=>{
    return x>4;
})

// another way of writing the same code
const output5 = arr.filter((x)=>x>4 );