
![Logo](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/icon48.png)

    
# Chrome Extension (jokes Generator)

A Chrome Extension that randomly delivers either one or two-part jokes, this helps in qucik relaxation and brings a smile on your face


## API Reference

#### Fetch Jokes

```http
  Fetch  https://icanhazdadjoke.com/
```

#### Code Snippet

```
async function genJoke(){
    const res = await fetch("https://icanhazdadjoke.com/", {
        headers :{
            'Accept': 'application/json',
        }
    });
    const joke = await res.json();
    joke_el.innerHTML = joke.joke;
}

```
  
## Installation / Usage

Sooner or later I'm going to put this extensions on Chrome Web Store but untill then
follow these simple steps to get this extension on your browser


Step 1: Download the zip file of this repository on your system.

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/1.png)

Step 2: Exctract the zip folder. 

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/z.png)

Step 3: Open Chrome Browser

Step 4: Click on the puzzle icon besides the address bar and then manage extensions.

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/2.png)

Step 5: Turn on developer mode on the extensions tab.

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/3.png)

Step 6: Click the Load Unpacked button and select the folder previously extracted and boom your extension is ready to use.

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/4.png)

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/5.png)

Step 7: Click kp. icon on the extensions bar.

![App Screenshot](https://raw.githubusercontent.com/krutikpatel28/chrome-ext-daily_joke/main/ss/x.png)