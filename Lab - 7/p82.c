/*Program to make a function to calculate nCr.*/

#include<stdio.h>
long fact(int n)//Function Defination
{
    long int fact=1;

    
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
long result(int n,int r)//Function Defination
{
   long int fresult;
  
    if(r>n)
    {
        
        return 0;
    }
    
    
        fresult= fact(n)/(
        fact(r)*fact(n-r));
        return fresult;
    
}
int main()
{
    int n,r;
    long int fresult;
   

    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    
   fresult=result(n,r);//Calling Function
   printf("answer is %ld",fresult);
return 0;
}