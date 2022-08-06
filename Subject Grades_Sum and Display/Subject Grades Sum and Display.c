#include <stdio.h>
#include <stdlib.h>

struct students{
    float math;
    float science;
    float arabic;
}stu1;
typedef struct students students;

int main(){

    int n;
    printf("Enter number of students :");
    scanf("%d",&n);
    students * ptr = (students*) malloc(n*sizeof(students));
    for (int i = 1;i<=n;i++){
        printf("\nEnter grade of student no.%d : \n",i);
        for (int k=0; k<3; k++){
            switch (k)
            {
            case 0:
                printf("Math : ");
                scanf("%f",&ptr[i].math);
                break;
            case 1:
                printf("Science : ");
                scanf("%f",&ptr[i].science);
                break;
            case 2:
                printf("arabic : ");
                scanf("%f",&ptr[i].arabic);
                break;
        }
    }
    
}

//for displaying the stored grades and sum;

for (int i=1;i<=n;i++){
    float sum = ptr[i].math+ptr[i].science+ptr[i].arabic;
    printf("\nGrades of student no.%d are : Math(%.2f) Science(%.2f) Arabic(%.2f) and sum of grades is : %.2f",i,ptr[i].math,ptr[i].science,ptr[i].arabic,sum);
}   


}