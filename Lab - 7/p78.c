/*Program to check whether number is Armstrong or not using function*/

#include<stdio.h>
void armstrong(int number)//Function Defination
{
    int nummber,sum=0,a,q;
    a=number;
    while(number>0)
    {
        
        q=number%10;
        sum=q*q*q + sum;
        number=number/10;
    }

    if(a==sum)
    {
        printf("%d is Armstrong Number",a);
    }
    else
    {
        printf("%d is not Armstrong Number",a);
    }

}

    
 int main()
{
     int number;
    

    printf("Enter the number");
    scanf("%d",&number);
    armstrong(number);//Calling Function
     return 0;
}
