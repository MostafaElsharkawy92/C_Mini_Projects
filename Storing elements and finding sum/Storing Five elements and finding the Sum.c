*/ 

Mostafa Osama Abdellatif Elsharkawy

Session 5:

Task 1: Store 5 elements and print them and print the summation of elements.

*/


#include <stdio.h>

int main(){
    
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for (int i=0;i<5;i++){
        printf("x [%d] = %d\n",i,arr[i]);
        sum = sum +arr[i];
    }    
    printf("The sum  is : %d",sum);
    return 0;
}