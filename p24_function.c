

#include<stdio.h>
int main()
{
    int n,x,a,y;
    printf("Enter value of n,x");
    scanf("%d%d",&x,&n);
    
     
     switch(a)
     {
     
     case 1:if(n==1)
             {
             y=1+x; 
             printf("Value of function =%d \n",y);}
             break;
    case 2:  if(n==2)
           { y=1+x/n;
            
             printf("Value of function = %d\n",y);}
             break;
     case 3:if(n==3)
            {y=1+x*x*x;
            
             printf("Value of function =%d\n");}
             break;
     default:{ y=1+n*x;
      printf(" Value of function = %d\n",y);
}

}
}