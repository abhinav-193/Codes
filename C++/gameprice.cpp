int eatenChocolades(int availableCash, int price, int wrapperDiscount){
    int eaten = 0;
    int wraps = 0;
     
    wraps = eaten = availableCash/price;
     
    while (wraps >= wrapperDiscount){
        int newlyEaten = wraps/wrapperDiscount;
        eaten += newlyEaten;
        wraps %= wrapperDiscount;
        wraps += newlyEaten;
    }
     
     
    return eaten;
}

def chocolateFeast(availableCash, price, wrapperDiscount):
    eaten = availableCash // price
    wraps = eaten
 
    while wraps >= wrapperDiscount:
        newlyEaten = wraps // wrapperDiscount
        eaten += newlyEaten
        wraps = wraps % wrapperDiscount + newlyEaten
 
    return eaten
