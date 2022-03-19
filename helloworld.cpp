#include<stdio.h>

int isPalindrome(int x){
    if(x<0){
        return 0;
    }
    //判断数字长度
    int n=0;
    int data = x;
    while(data)
    {
        n++;
        data = data / 10;
    }
    printf("%d\n",n);

    int m = n/2; //判断一半
    while(m>0){
        if((x/n)!=x%10){
            return 0;
        }
        x/10;
        n--;
        m--;
    }
    return 1;
}

int main(){
    printf("%d",isPalindrome(121));
}
