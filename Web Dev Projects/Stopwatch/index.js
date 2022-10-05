var seconds = document.getElementById("seconds");
var milliseconds = document.getElementById("milliseconds");
var start = document.getElementById("start");
var stop = document.getElementById("stop");
var reset = document.getElementById("reset");
let millisec = 0;
let sec = 0;
var timeInterval;
const timer = () => {
  millisec++;
  if (millisec < 9) {
    //   for displaying 00 we add "0"
    milliseconds.innerHTML = "0" + millisec;
  }
  if (millisec > 9) {
    milliseconds.innerHTML = millisec;
  }
  if(millisec>99)
  {
      sec++;
      seconds.innerHTML="0"+sec;
      millisec=0;
      milliseconds.innerHTML="0"+0;
  }
  if(sec>9)
  {
      seconds.innerHTML=sec;
  }
};

// for strat button
start.addEventListener('click',()=>{
    // here 10 is in milliseconds
    timeInterval=setInterval(timer,10);
})

// for stop button
stop.addEventListener('click',()=>{
    clearInterval(timeInterval);
})

// for reset button
reset.addEventListener('click',()=>{
    seconds.innerHTML="0"+0;
    milliseconds.innerHTML="0"+0;
})