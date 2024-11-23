/*Program to print Fibonaci series whose first two terms are 0 and 1*/
/*In fibonaci series, term is sum of previous two terms*/

#include<stdio.h>
int main()
{
    int a=0,b=1,n,next=0;
    printf("enter vaalue of number of terms");
    scanf("%d",&n);
    printf("Fibonaci series of %d terms\n",n);

    for (int i=1;i<=n;i++)
    {
        printf("%d\n",a);
        next=a+b;
        a=b;
        b=next;
        
    }
     
    
}
