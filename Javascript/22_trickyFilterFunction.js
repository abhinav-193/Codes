// write a function using filter to find out the first name of al the people of whose age is less 30
const users = [
    {firstName : "Harshit" , lastName : "Yadav" , age : 25},
    {firstName : "Virat" , lastName : "Kohli" , age : 25},
    {firstName : "Rohit" , lastName : "Sharma" , age : 37},
    {firstName : "KL" , lastName : "Rahul" , age : 53},
]

const output = users.filter((x)=> x.age < 30).map((x)=> x.firstName);
// here map function worked on the output of filtered output
console.log(output);