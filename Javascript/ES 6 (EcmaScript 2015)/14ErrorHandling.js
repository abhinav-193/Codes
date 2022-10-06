// try & catch

// producing promise
// promises constructor
const pobj1 = new Promise((resolve, reject) => {
    setTimeout(() => {
        // fetching roll number
        let myArray = [1, 2, 3, 4, 5];
        resolve(myArray);
        // reject("Error while communicating");
    }, 2000)
});



const getBioData = (indexData) => {
    return new Promise((resolve, reject) => {
        setTimeout((indexData) => {
            let bioData = {
                name: 'vinod',
                age: 26,
            }
            resolve(`My roll no is ${indexData}. My nam is ${bioData.name} and I am ${bioData.age} years old. `)
        }, 2000, indexData)
    })
}

// catching the promise using async/ await function
async function getData() {
    try{
        const arrayData = await pobj1;
        console.log(arrayData);

        const bioDatass = await getBioData(arrayData[1]);
        console.log(bioDatas)
    }catch(error){
        console.log(`The error is ${error}`);
    }
}
getData();