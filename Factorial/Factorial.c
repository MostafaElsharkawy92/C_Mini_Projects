#Mostafa Osama Abdellatif Elsharkawy
Session 3 Task:(Writing a factorial)
 
#include <stdio.h>

int factorial ();

void main()
{
    printf("%d\n",factorial());
}


int factorial()
{
    int x,i;
    long int result=1;
    printf("Enter the number : ");
    scanf("%d",&x);
    switch(x)
    {
    case 0:
        result=1;
    default:
        while(x!=0)
        {
            result = result *x;
            x--;
        }
    }
    return result;
}