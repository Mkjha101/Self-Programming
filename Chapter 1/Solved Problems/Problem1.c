//Calculating Gross salary of Ramesh
#include <stdio.h>
int main(){
    int BA; float DA,HRA;
    printf("Enter Basic Salary of Ramesh:\t");
    scanf("%d",&BA);
    DA=40*BA/100;
    HRA=20*BA/100;
    float GSal=BA+DA+HRA;
    printf("Gross Salary of Ramesh is %f",GSal);
    return 0;
}