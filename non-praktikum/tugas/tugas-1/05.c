#include<stdio.h>
#define ll long long

int main(){
    ll num1, num2, num3;
    scanf("%lld %lld %lld", &num1, &num2, &num3);
    
    double average = (double)(num1 + num2 + num3) / 3.0;
    
    printf("%.2lf\n", average);
    
    return 0;
}