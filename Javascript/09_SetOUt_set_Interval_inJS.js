// -------------------------------Set out set interval----------------------------------------------


// -------------------------------->>>>>Arrow functions
// function can be defined in two ways

// 1st method
// function sum(a,b){
//     return a+b;
// }

// 2nd method
sum=(a,b)=>{
    return a+b;
}

// -------------------Set TImeOut
// to set a process to be performed after specific time interval in milliseconds
logKaro=()=>{
    console.log("I am your log");
}
// setTimeout(logKaro,2000);

// to perform something repeatedly
// setInterval(logKaro,2000);

// to stop setInterval function we use clearInterval() function
clr=setInterval(logKaro,2000);


// use clearInterval(clr)/clearTimeout(clr) to cancel setInterval/setTimeout