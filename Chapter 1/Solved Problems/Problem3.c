//Aggregate of Marks in 5 subjects and Percentage of Marks Obtained...
#include <stdio.h>
int main(){
    int S1,S2,S3,S4,S5, Aggregate;
    float Percentage;
    printf("Enter the marks [Maximum Marks is 100].\n");
    printf("Subject 1:\t"); scanf("%d",&S1);
    printf("Subject 2:\t"); scanf("%d",&S2);
    printf("Subject 3:\t"); scanf("%d",&S3);
    printf("Subject 4:\t"); scanf("%d",&S4);
    printf("Subject 5:\t"); scanf("%d",&S5);

    printf("Marks in Subject 1:\t%d\n",S1);
    printf("Marks in Subject 2:\t%d\n",S2);
    printf("Marks in Subject 3:\t%d\n",S3);
    printf("Marks in Subject 4:\t%d\n",S4);
    printf("Marks in Subject 5:\t%d\n",S5);

    Aggregate=S1+S2+S3+S4+S5;
    printf("Total Marks [Out of 500]: %d\n",Aggregate);

    Percentage=(Aggregate*100.0)/500;
    printf("Percentage=\t%f",Percentage);
    return 0;
}