#include<stdio.h>
#define ll long long

int main(){
    double weight, height, bmi;
    scanf("%lf %lf", &weight, &height);
    
    bmi = weight / (height * height);
    
    printf("%.2lf\n", bmi);
    
    return 0;
}