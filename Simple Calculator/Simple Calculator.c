/* By : Mostafa Osama Elsharkawy
   E-mail : mostafa.elsharkawy@ejust.edu.eg
	    mostafaosama123.mo@gmail.com
*/

// This is the task of session 1 to create a simple calculator.

#include <stdio.h>
int main(){

    float a,b;
    int d,i=1;

    while (i==1){
        printf("Choose 1 to do addition(+), 2 for subtraction (-) \nChoose 3 for multuplication(x), choose 4 for division(/)\nChoose 5 for reminder \n\n");
        printf("Enter the number of operation: ");
        scanf("%d",&d);
        printf("Enter First number : ");
        scanf("%f",&a);
        printf("Enter Second number : ");
        scanf("%f",&b);

        if (d == 1){
            printf("%.1f + %.1f = %.1f\n\n",a,b,a+b);
        }
        else if (d==2){
            printf("%.1f - %.1f = %.1f\n\n",a,b,a-b);
        }
        else if (d==3){
            printf("%.1f x %.1f = %.1f\n\n",a,b,a*b);
        }
        else if (d==4){
            printf("%.1f / %.1f = %.1f\n\n",a,b,a/b);
        }
    }
    return 0;
}