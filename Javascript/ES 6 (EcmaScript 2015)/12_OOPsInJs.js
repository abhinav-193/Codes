// Object Oriented in Javascript

/* Object : An object is an instance in class.
We can create as much objects we want and they share the common properties as class

we can also change some of the properties of the object
*/

/* ES6 provides keyword class */
/* JAvascript classes , introduced in ecma script 2015  are primarily synctactical over Javascript's exisiting prototype based inheritence - (means pehle se tha class ka concept js m, kain usko easy krne k liye class keyword introduce kiya gya)*/

/* A class is a type of function , but instead of using the keyword function to initiate it , we use the keyword class , and the properties are assigned in the constructor() method*/

/*For OOPs : A class is a user defined blueprint or prototype from which objects are created. It represents the set of properties or set of methods that are common to all objects of one type*/

// If we dont call constructor, js by default calls the constructor


class Students{
    bioData(){
        // console.log("Hi I am class method");
    }
}

let obj1 = new Students();
// obj1.bioData();


//  demo of constructor class

class StudentsConstructor{
    constructor(names, age , cls){
        this.myName = names;
        this.myAge = age;
        this.myCls =  cls;
    }
    // instance method
    // had it been static method it couldnot have accessed by Player class
    bioData(){
        // instead of console.log() we have used return here because when another class inyherits its properties, it can use the values of constructor
        return (`Hi I am class method and my name is ${this.myName}`);
    }
    static heroMe(){
        console.log(`My favouriote game is cricket`);
    }
}

let obj2 = new StudentsConstructor("Harshit");
obj2.bioData();


//  now if we want to inherit the properties of a class into another class
class Player extends StudentsConstructor{
    // if we want to make any changes to this class using object created of previous class, we will maek constructor and use super() keyword to call the constructor properties of parent class
    constructor(names, age , cls,game){
        super(names, age , cls);
        this.myGame = game;
    }
    // bioData(){
    //     console.log(`Hi I am class method and my name is ${this.myName}. My favourite game is ${this.mygame}`);
    // }


    // anoter way of using above bioData function()
    player_Biodata(){
        console.log(`${super.bioData()}. I am player of ${this.myGame}`);
    }

}
let obj3 = new Player("Harshit", 23, 2, "Football");
obj3.player_Biodata();