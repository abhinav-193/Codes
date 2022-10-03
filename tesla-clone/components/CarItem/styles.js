import { StyleSheet, Dimensions } from "react-native";

const styles=StyleSheet.create({
    carContainer: {
        width: '100%',
        height:Dimensions.get('window').height+50,
        
      },

      carSubtitleCTA:{
        textDecorationLine:'underline',
        fontWeight:'bold',
      },
    
      titles: {
        marginTop:'30%',
        width:'100%',
        alignItems:'center',
        // backgroundColor:'lightgray'
      },
      title:{
        fontSize:40,
        fontWeight:'bold',
      },
      subtitle:{
        fontSize:16,
        color:'#5c5e62',
      },
      image:{
        width:'100%',
        height:'100%',
        resizeMode:'cover',
        // zIndex:-10,
        position:'absolute',
      },
      buttonsContainer:{
        position:'absolute',
        width:'100%',
        bottom:'5%',
      }
})

export default styles