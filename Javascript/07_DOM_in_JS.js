// ---------------------------------DOM (Document Object Model) Manipulation-----------------------------

// to get element by id 
let elem=document.getElementById("click");
console.log(elem);

// to get elementS by class name
let elemClass=document.getElementsByClassName("container");
console.log(elemClass);

// to change styles of the first element--all the elements inside a container are in the form of an array
elemClass[0].style.background="yellow";

// to add class bg-primary
elemClass[0].classList.add("bg-primary");

// to add class text success to first child of the container class
elemClass[0].classList.add("text-success");

// to get HTML codes of the html file
console.log(elem.innerHTML);

// to get the inner text of the html file
console.log(elem.innerText);

console.log(elemClass[0].innerHTML);
console.log(elemClass[0].innerText);

// getting elements by tagname
tn=document.getElementsByTagName("div");
console.log(tn);

// to create an element inside the class
createdElement=document.createElement("p");
// writing text under the created element
createdElement.innerText="This is a created para";
tn[0].appendChild(createdElement);

// creating another element
createdElement2=document.createElement("b");
createdElement2.innerText="This is a created bold";

// replacing one element with another
tn[0].replaceChild(createdElement2,createdElement);

// --------------------------------->>>>to be used in console of the browser<<<<-----------------------S
// for selecting images
// document.images;

// for selecting URL
// document.URL;

// to get all the links
// document.links;

// to get location 
// document.location;

// to get domain
// document.domain;




// ------------------------------------->>Selection Using QUery<<<-------------------------------------
// to get the element
sel=document.querySelector('.container');
console.log(sel);

sel=document.querySelectorAll('.container');
console.log(sel);