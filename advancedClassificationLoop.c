#include<stdio.h>
#include<math.h>
#include "NumClass.h"


int isPalindrome(int n){
    int flag = 1;
    int origin = n;
    int sum = 0;
    int leftover;
    while(n > 0){
        leftover= n%10;
        sum = (sum*10)+leftover;
        n = n/10;
    }
    if(sum != origin)flag = 0;
    
    return flag;
}
int isArmstrong(int n){
     int flag = 1;
    int origin = n;
    int sum = 0;
    int leftover;
    int counter = 0;
    while(n>0){
        n=n/10;
        counter++;
    }
    n = origin;
    while(n > 0){
        leftover= n%10;
        int p = pow(leftover,counter);
        sum = sum+p;
        n = n/10;
    }
    if(sum != origin)flag = 0;
    
    return flag;
}
