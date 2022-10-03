// function statement aka function declaration
function a() {
    console.log("a called");
}

// function expression
var b = function () {
  console.log("function stored in variable");
};

// anonymous function
// funcction (){
    // a function without name
// }

// named fucntion
// var b = function xyz() {
  console.log("function stored in variable");
//   we can access the fucntion xyz() inside here
// console.log(xyz);
// };
// a();
// b();
// xyz();
// the above line will show error


// difference between argument and parameter
// function a(parameter) {
//     console.log("a called");
// }
// a(argument);

// first class functions
function a(parameter) {
    console.log("a called");
    console.log(parameter);
}
a(function xyz(){
    console.log("343");
});
a();
