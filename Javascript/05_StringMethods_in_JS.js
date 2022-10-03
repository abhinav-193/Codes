// string methods in java script

let str="Harshit is very very goood bchha";

// to find length
console.log(str.length);

// to find index of a part of string---it only gives the index of first occurence
console.log("Use of indexOf() \n");
console.log(str.indexOf("very"));

// to find the last e=index of the part of the string
console.log("Use of lastIndexOf() \n");
console.log(str.lastIndexOf("very"));

// to take out a part from the string
console.log("Use of slice() \n");
console.log(str.slice(1,4));

// to replace one part of the string with different characters
console.log("Use of replace() \n");
d=str.replace("Harshit","sonu");
console.log(d);