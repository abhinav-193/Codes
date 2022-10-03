import React from 'react'
import {View,Text, ImageBackgroun,FlatList,Dimensions} from 'react-native'
import styles from './styles'
import cars from './cars'
import CarItem from '../CarItem'

const CarsList=()=>{
    return(
        <View style={styles.container}>

            <FlatList
            
            data={cars}
            renderItem={({item})=>{
                return <CarItem car={item}/>
            }
           
        }
        showsVerticalScrollIndicator={false}
        snapToAlignment="start"
        decelerationRate={'normal'}
        snapToInterval={Dimensions.get('window').height+50}
            // keyExtractor={({item})=>item.id}
            
            />
        </View>
    )
}

export default CarsList