// promises are used to handle asynchronmous operations in javascript. They are easy to manage when dealing with multiple asynchronous operations where callbacks can create callback hell leading to unmanageabale code.

// a promise is an object that keep track about wheather a certain event has happened already or not.

// determines what happens after the event has happened.


/*
exaample : 
promises has 3 stages
 -> for eg: promise me that you will call me at 10 am tommorow
 it has 3 stages:
 -> time is not yet 10 a.m.
 -> you will call me ( success or fulfill or resolve)
 -> you will not call me ( failure or reject)
 */

/* 
Two ways to resolve promise:
1. promises constructor
2. promise as an object
*/

// producing promise
// promises constructor
const pobj1 = new Promise((resolve, reject)=>{
    setTimeout(()=>
    {
        // fetching roll number
        let myArray = [1,2,3,4,5];
        resolve(myArray);
        // reject("Error while communicating");
    }, 2000)
});



const getBioData=(indexData)=>{
    return new Promise((resolve, reject)=>{
        setTimeout((indexData) =>{
            let bioData = {
                name : 'vinod',
                age : 26,
            }
            resolve(`My roll no is ${indexData}. My nam is ${bioData.name} and I am ${bioData.age} years old. `)
        }, 2000, indexData)
    })    
}

// consuming promise
pobj1.then((createdArray)=>{
    console.log(createdArray);
    return getBioData(createdArray[1]);
}).then((message)=>{
    console.log(message);
})
.catch((error)=>{
    console.log(error);
});
/* 
a function to be executed by the constructor, during the process of constructing the promiseObj.
The executor is custom code that ties an outcome to a promise.
You the programmer, write the executor.
*/ 

/*
resolvefunc(value)   //call on fulfiled
rejectFunc(reason)   //call on rejected
 */

/*
the methods promise.then(), promise.catch() and promise.finally() are used to associate further  action with a promise that becomes settled */