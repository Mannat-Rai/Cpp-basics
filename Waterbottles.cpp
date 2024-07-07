class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles ;
        while( numBottles >= numExchange ){
            int filledBottles = numBottles / numExchange ;
            int emptyBottles = numBottles % numExchange ;
            total = total + filledBottles ;
            numBottles = filledBottles + emptyBottles ;
        }
       return total ; 
    }
};
