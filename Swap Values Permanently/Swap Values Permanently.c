/* Mostafa Osama Abdellatif Elsharkawy

Session 5 - Task 2 : write a function to swap to variable permanently  
*/

#include <stdio.h>

void func(int *x, int*y){
    int temp=*y;
    *y = *x;
    *x =temp;
    printf("%d %d\n",*x,*y);   

}

int main(){

    int a=5;
    int b=10;
    func(&a,&b);
    printf("%d %d",a,b);

}