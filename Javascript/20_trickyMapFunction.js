const users = [
    {firstName : "Harshit" , lastName : "Yadav"},
    {firstName : "Virat" , lastName : "Kohli"},
    {firstName : "Rohit" , lastName : "Sharma"},
    {firstName : "KL" , lastName : "Rahul"},
]

const output = users.map((x)=> x.firstName + " " + x.lastName);
console.log(output);