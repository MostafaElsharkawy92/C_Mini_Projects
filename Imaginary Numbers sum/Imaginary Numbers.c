/* Session  4 

##Mostafa Osama Abdellatif Elsharkawy

Task: 

Write a structure for imaginary two number and adding and display them:

*/ 

#include <stdio.h>


struct complex_num
{
    int real;
    int imaginary;

};

typedef struct complex_num complex_num;

complex_num Sum_Function(complex_num a, complex_num b){

    complex_num result;

    result.real =a.real +b.real;
    result.imaginary= a.imaginary+b.imaginary;
    return result;
};

int main(){

    complex_num num1={5,6};
    complex_num num2={1,2};

    printf("(%d+%di) + (%d+%di) =\n",num1.real,num1.imaginary,num2.real,num2.imaginary);
    printf("%d+%di",Sum_Function(num1,num2).real,Sum_Function(num1,num2).imaginary);


}