// ----------------------------Multi line comment----------------------------------------
// it is written between /* ---------------------------*/



// 1---------------------------ways to print in Java Scrpit-------------------------------
// console.log("Hello World");
// alert("me");
document.write(" <h2> This is document write</h2> ");




// 2--------------------------JavaScript console Application programming interface(API)--------
console.log("Hello world");
console.log("hello world", 4 + 6, "Another log");
console.warn("this is warning");
console.error("This is an error");




// 3----------------------------JavaScript Variables---------------------------------------
// -->What are Variables?---Containers to store data values
var number1=34;
var number2=56;
console.log(number1 +number2);


// 4----------------------------Data Types in JavaScript------------------------------------
// ----->numbers
var num1=455;
var num2=45.67;

// -----------------String--------------------------------
var str1="This is string";
var str2='This is also a string';

// ---->-----------Objects--------------------------------
var marks={
    ravi:34,
    shubham :78,
    harshit: 100
}
console.log(marks);


//-----> -----------------booleans----------------------
var a=true;
var b=false;
console.log(a,b);

// ----->undefined
var und=undefined;
// ---its value is by default undefined because it doesnot conatain any value
var und1;
// console.log(undefined);
// console.log(und1);

var n=null;
// console.log(n);

// --------------------------Data Types------------------
/* At very high level, there are two types of data types in javascript:
1.Primitive data types:undefined,null,number.string,boolean,symbol
2.Refernce data types:Arrays and objects 
*/

// -------------------------Arrays------------------------
// count starts from 0
var arr=[1,2,3,4,5];
var arr1=[1,2,"this is  string",6,8];



// ---------------------Operators in java script----------
// ---Arithmetic operators
/*+,-*,/ */

// ---Assignment Operators
var c=3;
var d=9;
c+=2;
console.log("value of c is",c);

// ---Comparison Operators
var p=9;
var f=5;
console.log(p==f);
console.log(p>=f);
console.log(p<=f);


// ---Logical Operators
console.log(true && true);
console.log(true&& false);
console.log(true || false);

// --logical not operators--converts false to true and true to false
console.log(!false);
console.log(!true);