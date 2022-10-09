// accesing the elements of the array

const names = ["sanjeev" , "priya" , "harry", "aman"]
// no need to use brackets in .length function if we want to calculate he length of array
for(let i = 0 ; i < names.length; i = i+1 ){
    element = names[i];
    console.log("Using for : hello", element);
}

//  the above code can be wriiten in same format as:


names.forEach(function f(element){
    console.log("using forEach fucntion : hello" , element);
})


// for-of loop can also be used
for( elementArray of names){
    console.log("Using for-of : hello" , elementArray);
}