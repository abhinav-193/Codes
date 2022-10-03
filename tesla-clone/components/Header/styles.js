import { StyleSheet } from "react-native"

const styles=StyleSheet.create({
    container: {
        display:'flex',
        justifyContent:'space-between',
        // alignItems:'center',
        flexDirection:'row',
        position:'absolute',
        top:5j0,
        width:'100%',
        paddingHorizontal:20,
        zIndex:100,
    },
    logo:{
        width:100,
        resizeMode:'contain',
        height:20,

    },
    menu:{
        width:25,
        height:25,
        resizeMode:'contain',
    }
})

export default styles