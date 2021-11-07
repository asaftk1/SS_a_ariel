#include "NumClass.h"
#include<stdio.h>
#include<math.h>
//#include "advancedClassificationLoop.c"
#include "advancedClassificationRecursion.c"
#include "basicClassification.c"

int main()
{
    int first,last;
    scanf("%d",&first);
    scanf("%d",&last);
        printf("The Armstrong numbers are:");
      for(int i = first ; i<=last ; i++){
        if(isArmstrong(i)==1)printf(" %d",i);
    }
    printf("\n");
    printf("The Palindromes are:");
    for(int i = first ; i<=last ; i++){
        if(isPalindrome(i)==1)printf(" %d",i);
    }
    printf("\n");
    printf("The Prime numbers are:");
      for(int i = first ; i<=last ; i++){
        if(isPrime(i)==1)printf(" %d",i);
    }
    printf("\n");
    printf("The Strong numbers are:");
      for(int i = first ; i<=last ; i++){
        if(isStrong(i)==1)printf(" %d",i);
    }
   return 0; 
}
