/* Program that interchange the value of two number using function*/
#include<stdio.h>
int swap(int x,int y)//Function Defination
{
    
    int temp;
    temp=y;
    y=x;
    x=temp;

    printf("x is %d\n",x);
    printf("y is %d\n",y);
}
int main()
{
    int x,y;
    printf("Enter the x and y\n");
    scanf("%d%d",&x,&y);
    swap(x,y);//Calling Function
    return 0;
}