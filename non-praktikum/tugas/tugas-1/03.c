#include<stdio.h>
#define ll long long
#define PI 3.14159

int main(){
    double r, height;
    scanf("%lf %lf", &r, &height);
    
    double volume = PI * r * r * height;
    double area = 2 * PI * r * (r + height);
    
    printf("%.2lf %.2lf\n", volume, area);
    
    return 0;
}