#include<stdio.h>
#define ll long long

int main(){
    double total_purchase;
    scanf("%lf", &total_purchase);
    
    if(total_purchase >= 500000) total_purchase -= total_purchase * 0.2;
    else if(total_purchase >= 250000) total_purchase -= total_purchase * 0.1;
    
    printf("%.2lf\n", total_purchase);
    
    return 0;
}