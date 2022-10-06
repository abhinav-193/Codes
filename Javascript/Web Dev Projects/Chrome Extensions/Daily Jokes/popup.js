const joke_el = document.getElementById("joke");
const gk = document.getElementById("get_joke");

if(gk){
    gk.addEventListener('click',genJoke);
}

genJoke();

async function genJoke(){
    const res = await fetch("https://icanhazdadjoke.com/", {
        headers :{
            'Accept': 'application/json',
        }
    });
    const joke = await res.json();
    console.log(joke);
    joke_el.innerHTML = joke.joke;
}