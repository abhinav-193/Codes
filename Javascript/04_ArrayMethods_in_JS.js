// ---------------------------------Array Methods in JS--------------------------------
// we can store string,integers,null and boolean value in an array in javascript

let myArr=["Fan","Camera",34,null,true];

// array metho0ds:
console.log("Original array : \n", myArr);
console.log(myArr.length);

// to take out last element from array and print the remaninig array
console.log("use of .pop()");
myArr.pop();
console.log(myArr, "\n");

// to add element to the array in last
console.log("use of .push()");
myArr.push("harshit");
console.log(myArr, "\n");

// to remove first element of the array
console.log("use of .shift()");
myArr.shift();
console.log(myArr, "\n");

// to add element before the first element in the array
console.log("use of .unshift()");
myArr.unshift('Bkchod');
console.log(myArr, "\n");