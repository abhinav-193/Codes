import React from 'react'
import {View,Text, ImageBackground, Pressable} from 'react-native'
import styles from './styles'

const StyledButton = (props) =>{


    const type=props.type

    const backgroundColor=type==='primary'? '#171A20CC':'#FFFFFFA6'
    const textColor=type=='primary'?'#FFFFFF':'#171a20'
    return(
        <View style={styles.container}>

            <Pressable style={[styles.button,{backgroundColor:backgroundColor}]} 
            
            onPress={props.onPress}
            >   

            <Text style={[styles.text,{color:textColor}]}>{props.buttonText}</Text>

            </Pressable>

        </View>
    )
}

export default StyledButton