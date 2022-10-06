import React from 'react'

function Alert(props) {


    const alertStyle={
        height: "50px"
    }
    return (
        <div style={alertStyle}>
           { props.alert && <div>
            <div className={`alert alert-${props.alert.type} d-flex align-items-center" role="alert"`}>
                {/* <svg throwIfNamespace: "false" className="bi flex-shrink-0 me-2" width="24" height="24" role="img" aria-label="Info:"><use xlink:href="#info-fill"/></svg> */}
                <div>
                    <strong>{props.alert.msg}</strong>
                </div>
            </div>
        </div>}
        </div>
       
    )
}

export default Alert
