
import { useState } from 'react';
import './App.css';
import Alert from './components/Alert';
import About from './components/About';
import Navbar from './components/Navbar';
import TextForm from './components/TextForm'

// import {
//   BrowserRouter as Router,
//   Switch,
//   Route,
//   Link
// } from "react-router-dom";

function App() {

  const[mode,setMode] = useState('light')
  const [alert,setAlert] = useState(null)

  const [color,setColor] = useState("#000000")

  const showAlert = (message,type) =>{

          setAlert({
            msg: message,
            type: type
          })

          setTimeout(() => {
            setAlert(null)
          }, 2000);
  }

  const colorPicker = (col)=>{
    setColor(col)
  }

  const toggleMode=()=>{
    console.log("toggle triggered");
    if(mode==='light') {
        setMode('dark');
        document.body.style.backgroundColor=color;
        showAlert("Enabled Dark Mode Successfully","success")
    }
    else {setMode('light');document.body.style.backgroundColor="white";showAlert("Light Mode Enabled","success")}
  }



  return (
   <>
        {/* <Router> */}
          <Navbar title="TextUtils"  mode={mode}/>

          <Alert alert={alert} />

          {/* <Switch>
            <Route exact path="/about"> */}
              {/* <div className="container">

              <About />
              </div>
            </Route> */}
          
            {/* <Route exact path="/"> */}
              <div className="container">

            <TextForm heading="TextUtils - The Text Utility App" mode={mode} toggleMode={toggleMode} showAlert={showAlert} colorPicker={colorPicker} /> 
              </div>
            {/* </Route>
          </Switch> */}
        {/* </Router> */}
        
        
  
   </>
   
  );
}

export default App;
