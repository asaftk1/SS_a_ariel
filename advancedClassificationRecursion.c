#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int Check_Armstrong (int Number, int Times);
int count(int x);
int reverse(int num);

int count(int x){
    int counter =0;
    while(x>0){
        x = x/10;
        counter++;
    }
    return counter;
}
int isArmstrong(int num)
{
    int flag =1;
    int times = count(num);
    int sum = Check_Armstrong(num,times);
    if(sum == num)flag =1;
    else flag = 0;
    return flag;
}
int Check_Armstrong(int num,int times)
{   
    int sum =0;
    if(num>0)
    sum = (int)((pow(num%10,times)) +Check_Armstrong(num/10, times));
    return sum;
}
int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}
int reverse(int num)
{

    int digit = count(num)-1;
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}


