
// example
// setTimeout(function (){
//     console.log("this is error");
// },5000);
// function x(parameter){
//     console.log("x is called");
//     y();
// }
// x(function y(){
//     console.log("this is y");
// });


// example with closures
function eventListener{
    let count=0;
    document.getElementById("clickMe").addEventListener("click",function xyz(){
        console.log("Button clicked",++count);
    })
}