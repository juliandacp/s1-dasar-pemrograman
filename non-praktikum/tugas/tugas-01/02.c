#include<stdio.h>
#define ll long long
#define CONVERSION 1.8

int main(){
    double c, fahrenheit;
    scanf("%lf", &c);
    
    fahrenheit = CONVERSION * c + 32.0;
    
    printf("%.2lf\n", fahrenheit);
    
    return 0;
}