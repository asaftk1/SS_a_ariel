#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int Check_Armstrong (int Number, int Times);
int count(int x);
int reverse(int num);

int isArmstrong(int num)
{
    int flag =0;
    int Times = count(num);
    int sum = Check_Armstrong(num,Times);
    if(sum == num)flag =1;
    else flag = 0;
    return flag;
}
int count(int x){
    int counter =0;
    while(x>0){
        x = x/10;
        counter++;
    }
    return counter;
}
int Check_Armstrong (int Number, int Times)
{
  static int Reminder, Sum = 0;
  if (Number > 0)
   {
     Reminder = Number %10;
     Sum = Sum + pow(Reminder, Times);
     Check_Armstrong (Number /10, Times);
     return Sum;
   }
   else
     return 0;
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

