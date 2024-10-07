/*Program to check whether number is even or odd using function*/

#include<stdio.h>
void even(int a)//Function Defination
{
    int n;
    n=a%2;
    if(n==0)
    {
        printf("%d is even number",a);

    }
    if(n==1)
    {
        printf("%d is odd number",a);
    }

}

    int main()
    {
    int a;
    printf("Enter the a");
    scanf("%d",&a);

    even(a);//Calling Function
    return 0;
}
