#include<stdio.h>
#define ll long long

int main(){
    double basic_salary, allowance, tax, net_salary;
    scanf("%lf", &basic_salary);
    
    allowance = 0.2 * basic_salary;
    tax = 0.1 * (basic_salary + allowance);
    net_salary = basic_salary + allowance - tax;
    
    printf("%.2lf\n", net_salary);
    
    return 0;
}