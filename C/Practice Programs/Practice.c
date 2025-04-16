#include <stdio.h>
int PTrial(int , int *, int *);
int PTrial(int x, int *y, int *z){
    printf("Again, size is: %d", x);
    for(int i=0; i<x; i++){
        if(i==0){
            *y>*(y+1)?*z=1:0;
        }
        else if(i==x-1){
            *y>*(y-1)?*z=1:0;
        }
        else{
            (*y>*(y+1) && *y>*(y-1))?*z=1:0;
        }
        y++;
        z++;
    }
}

int main(){
    return 0;
}

/*
//1
int main(){
    int B;
    B=100;
    float C;
    C=20*B/100;
    printf("%d\n%f\n",B,C);
    int b;
    b=B*0.2;
    // printf("%d\n%d\n",b,b==C);
    // int d=sizeof(C);
    // printf("%d",d);
    return 0;
}
*/

/* 
// 2
int main(){
	while(1){
		;
	}
	return 0;
}
*/


// 3
/*
int main(){
    int a=1;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}
*/

//4
/*
int main(){
    int num=5;
    int a[num], Peaks[num];
    for(int i=0; i<num; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
        Peaks[i]=0;
    }
    printf("Size of Array \'a\' is: %d\n", num);
    PTrial(num, &a[0], &Peaks[0]);

    printf("\nUser Array: { ");
    for(int i=0; i<num; i++){
        printf("%d ", a[i]);
    }
    printf("}");

    printf("\nPeaks Array: { ");
    for(int i=0; i<num; i++){
        printf("%d ", Peaks[i]);
    }
    printf("}");
    return 0;
}
*/

