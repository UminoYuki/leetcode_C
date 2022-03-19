// 1518.换酒问题
// https://leetcode-cn.com/problems/water-bottles/
#include<stdio.h>
int numWaterBottles(int numBottles, int numExchange){
    int m;
    m = numBottles + numBottles/numExchange;
    numBottles = numBottles%numExchange + numBottles/numExchange;
    while(numBottles>=numExchange){
        m = m + numBottles/numExchange;
        numBottles = numBottles%numExchange + numBottles/numExchange;
    }
    return m;
}
int main(){
    printf("%d",numWaterBottles(100,2));
}