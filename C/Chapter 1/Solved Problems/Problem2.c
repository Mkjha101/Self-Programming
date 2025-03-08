//Conversion of Length...
#include <stdio.h>
int main(){
    float distance;
    printf("Enter the distance between 2 cities [in kms]:\t");
    scanf("%f",&distance);
    printf("Distance in Meters:\t%f\n",distance*1000);
    printf("Distance in Feet:\t%f\n",distance*3280.84);
    printf("Distance in Inches:\t%f\n",distance*39370.1);
    printf("Distance in Centimeters:\t%f\n",distance*100000);
    return 0;
}