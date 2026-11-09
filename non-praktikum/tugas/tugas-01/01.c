#include<stdio.h>
#define ll long long

int main(){
    double base, height;
    scanf("%lf %lf", &base, &height);
    
    double area = 0.5 * base * height;
    
    printf("%.2lf\n", area);
    
    return 0;
}