#include<stdio.h>
#include<math.h>
#define ll long long

float mse(float arr1[], float arr2[], ll n){
    float sum1 = 0.0;
    float tot1 = 0.0;

    for(ll i = 0; i < n; i++){
        tot1 = (arr1[i] - arr2[i]) * (arr1[i] - arr2[i]);
        sum1 += tot1;
    }

    return sum1 / (float)n;
}

float mae(float arr1[], float arr2[], ll n){
    float sum2 = 0.0;
    float tot2 = 0.0;

    for(ll i = 0; i < n; i++){
        tot2 = fabs(arr1[i] - arr2[i]);
        sum2 += tot2;
    }

    return sum2 / (float)n;
}

float mape(float arr1[], float arr2[], ll n){
    float sum4 = 0.0;
    float tot4 = 0.0;

    for(ll i = 0; i < n; i++){
        tot4 = fabs(arr1[i] - arr2[i]) / fabs(arr1[i]);
        sum4 += tot4;
    }

    return sum4 / (float)n * 100;
}

int main(){
    ll n;
    ll check = 1;
    scanf("%lld", &n);

    float arr1[n + 5];
    float arr2[n + 5];

    for(ll i = 0; i < n; i++){
        scanf("%f", &arr1[i]);
        if(arr1[i] == 0) check = 0;
    }

    for(ll i = 0; i < n; i++){
        scanf("%f", &arr2[i]);
    }

    float result1 = mse(arr1, arr2, n);
    float result2 = mae(arr1, arr2, n);
    float result3 = sqrt(result1);
    float result4;

    if(check == 1) result4 = mape(arr1, arr2, n);

    printf("MSE: %.2f, MAE: %.2f, RMSE: %.2f, MAPE: %.2f\n", result1, result2, result3, result4);

    return 0;
}