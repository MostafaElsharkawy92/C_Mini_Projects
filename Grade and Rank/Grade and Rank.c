//implement a program that takes the grade of a student ranging from 0 to 100; and prints the grade as excellent ,,etc
// use switch cases.
// By : Mostafa Osama Elsharkawy

#include <stdio.h>
int main()
{
    float grade;
    int case_num;
    printf("Please Enter your grade : ");
    scanf("%f",&grade);

    if ((grade>100)||(grade<0))
    {
        case_num = 6;
    }
    else if (grade>=90)
    {
        case_num=1;
    }
    else if (grade>=80)
    {
        case_num=2;
    }
    else if (grade>=70)
    {
        case_num=3;
    }
    else if (grade>=50)
    {
        case_num=4;
    }
    else if (grade>=0)
    {
        case_num=5;
    }



    switch (case_num)
{

    case 1:
        printf("\nExcellent\n");
        break;
    case 2:
        printf("\nVery Good\n");
        break;
    case 3:
        printf("\nGood\n");
        break;
    case 4:
        printf("\nPass\n");
        break;
    case 5:
        printf("\nFail\n");
        break;
    case 6:
        printf("\ninvalid grade\n");
}




}
