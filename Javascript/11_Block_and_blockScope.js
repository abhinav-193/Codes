// notes in ONENOTE application
let b=10;
{
    let b=4;
    console.log(b);
    // output 4
}
console.log(b);
// output: 10

// illegal shadowing
let b=10;
{
    var b=4;
    console.log(b);
    // output : variable is already been declared
}
// legal shadowing
var b=4;
{
    let b=10;
    console.log(b);
    // output : variable is already been declared
}
var b=4;
function x(){
    let b=10;
    console.log(b);
    // output : 10
}
const b=4;
{
    const b=10;
    {
        const c=100;
        console.log(b);
        // output : 100
    }
}


