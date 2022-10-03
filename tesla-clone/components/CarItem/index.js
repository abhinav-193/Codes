import React from 'react'
import {View,Text, ImageBackground} from 'react-native'
import Header from '../Header'
import StyledButton from '../StyledButton'
import styles from './styles'

const CarItem = (props) =>{

    const {name,image,tagline,taglineCTA}=props.car
    return(
        <View style={styles.carContainer}>

        <ImageBackground source={image} style={styles.image}/>

        {/* <Header /> */}

        <View style={styles.titles}>
          <Text style={styles.title}>{name}</Text>
          <Text style={styles.subtitle}>{tagline}{' '}<Text style={styles.carSubtitleCTA}>{taglineCTA}</Text></Text>
        </View>

        <View style={styles.buttonsContainer}>

          <StyledButton 
          type="primary" 
          buttonText='Custom Order'
          onPress={()=>{
              console.warn('Custom Order was pressed')
          }} />
          <StyledButton 
          type="secondary" 
          buttonText='Existing Inventory'
          onPress={()=>{
              console.warn("Existing Inventory was pressed")
          }} 
          />
        </View>

      </View>

    )
}

export default CarItem