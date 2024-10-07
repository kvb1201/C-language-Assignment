/*Program to check whether a number is Palindrom or not using functions*/

#include<stdio.h>
void palindrom(int number)//Function Defination
{
  int  original,b,c=0;
   original=number;

    while(number>0)
    {
        b=number%10;
        c=c*10+b;
        number=number/10;}
        
 if(original==c)
    {
        printf("%d is a Palindrom number",original);
    }
    else
    {
        printf("%d is not a Palindrom number",original);
    }
     
}
int main()
{
    int number,original,b,c=0;
    printf("Enter the number");
    scanf("%d",&number);
     
     palindrom(number);//Calling Function
   
         
    
   return 0;
    }