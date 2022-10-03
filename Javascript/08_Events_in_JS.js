// ------------------------------------>>Events in JavaScript<<<---------------------------------------

// creating function clicked
function clicked(){
    console.log('The biutton was clicked');

}

// to show message in console when our document is loading
window.onload=function(){
    console.log('the document is loaded');
}

firstContainer.addEventListener('click',function(){
    document.querySelectorAll('.container')[1].innerHTML="<b>We have clicked</b>"
    console.log('clciked');
})

firstContainer.addEventListener('mouseover',function(){
    console.log('took mouse over container');
})

let prevHTML=document.querySelectorAll('.container')[1].innerHTML;
firstContainer.addEventListener('mouseout',function(){
    document.querySelectorAll('.container')[1].innerHTML=prevHTML;
    console.log('took mouse out of container');
})

firstContainer.addEventListener('mouseup',function(){
    console.log('mouse up when clicked on container');
})
