// file can be run directly in termnal because of node js

let employee = {
    name : "harshit",
    roll : 24,
    channel : "CWH"
}

// for-in loop is used to iterate over objects in javascripts
for(key in employee){
     console.log(`the  ${key}  of the student is  ${employee[key]} `);
}