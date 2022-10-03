// destructuring of objects

const bioData = {
    name : "Vinod",
    age : 19,
    deg : "BTECH",
    hobby : {
        first : "playing",
        sec : "youtube"
    }
}

console.log(`Myname is ${bioData.name} `);
// (same name should be present) 


// other way

let {name, age, deg, hobby} = bioData;
// let {name:myName, age:umr, deg:degree} = bioData;

// or
// let name, age, deg;
// ({name,age,deg}) = bioData;

console.log(`My name is ${name}. My degree is ${deg}. I love making ${hobby.sec}`);