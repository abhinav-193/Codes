const users = [
    {firstName : "Harshit" , lastName : "Yadav" , age : 25},
    {firstName : "Virat" , lastName : "Kohli" , age : 25},
    {firstName : "Rohit" , lastName : "Sharma" , age : 37},
    {firstName : "KL" , lastName : "Rahul" , age : 53},
]

// now we need to fimd the frequency of ages present in the array

// {25 : 2 ,  37 : 1, 53 : 1}

const  output = users.reduce(function(acc, curr){
    if(acc[curr.age]){
        acc[curr.age] = ++acc[curr.age];
    }
    else{
        acc[curr.age] = 1;
    }
    return acc;
}, {})

console.log(output)