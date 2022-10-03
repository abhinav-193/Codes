// Default function parameters allow named parameters to be intitalized with default values if no value or undefined is passed

// -----ES5--------
function mult(a,b){
    console.log(a*b);
}
mult(4);
// output : NaN (not a number)

// to tackle this
function def(a,b){
    // if b is default put b = 3;
    b = (typeof b !== 'undefined') ? b : 3
    console.log(a*b);
}
def(4);
// output : 12


// ---ES6----
function subES(a,b=2){
    
    console.log(a-b);
}
subES(2);


 const ES=(a,b=2)=>{
    
    console.log(`${a-b}`);
}
ES(2);