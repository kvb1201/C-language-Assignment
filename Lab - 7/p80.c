/*Program to Print Fibonacci Series usung function*/

#include<stdio.h>
int fibo(int n)//Function Defination
{
    int first=0,second=1,third;
    printf("Fibonacci series is\n");
    printf("0  1 ");
    for(int i=0;i<n-2;i++)
    {
        third=first+second;
        first=second;
        second=third;
        printf("%d ",second);

    }

}
int main()
{
    int n;
    printf("Enter the number terms of fibonacci series\n");
    scanf("%d",&n);
    fibo(n);//Calling Function
    return 0;
}