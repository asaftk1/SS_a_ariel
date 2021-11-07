#include <stdio.h>
#include "NumClass.h"
#include <math.h>
#define sqrt


int fact(int r)  
{  
    int mul=1;  
    for(int i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul; 
      
}  
int isPrime(int n){
    int flag = 1;
      if(n<1){
          
          return 0;
      }
    
    for(int i = 2; i<= n/2; i++){
        if(n%i == 0)flag = 0;
    }
    
    return flag;
}
int isStrong(int n){
    int sum=0;   
    int k=n;  
    int r;  
    int res;
    while(k!=0)  
    {  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
    {  
        res =1;
    }  
    else  
    {  
        res=0;
         
    }  
    return res;  

}

