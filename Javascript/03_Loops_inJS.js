// ----------------------------LOOPS in JAVASCRIPT-------------------------
let arr = [1, 2, 34, 5, 6, 7];
// index starts from 0
// -->METHOD 1
console.log(arr);
for (var i = 0; i < arr.length; i++) // arr.length gives the length of the array
{
  console.log(arr[i]);
}
// -->METHOD 2
console.log("Using for each");
arr.forEach(function (element) {
  console.log(element);
});

// to use a variable at all places and not only inside curly braces
let j = 0;
// to make some something constant,and it cannot be incremented,if done it will show an error,here value of a cannot be changed
const a = 0;

// -------------------->>>WHILE LOOP<<<<-----------------------------
console.log("using  while loop");
while(j<arr.length){
    console.log(arr[j]);
    j++;
}


// -------------------->>>DO WHILE LOOP<<<<-----------------------------
console.log("using do while loop");
j = 0;
do{
    console.log(arr[j]);
    j++;
}while(j<arr.length);


// ---------------------->>Break statement And continue statement-------------
console.log("Use of break and continue statement");

for (var i = 0; i < arr.length; i++) // arr.length gives the length of the array
{
  if(i==2)
  {
    // break;
    continue;
  }
  console.log(arr[i]);
}