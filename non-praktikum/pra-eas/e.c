#include<stdio.h>
#include<string.h>
#define ll long long

typedef struct{
    char name[105];
    ll price;
    ll stock;
} Item;

int main(){
    ll n;
    scanf("%lld", &n);
    
    Item items[n + 5];
    for(ll i = 0; i < n; i++) scanf(" %s %lld %lld", items[i].name, &items[i].price, &items[i].stock);
    
    ll min = 0;
    ll min_new;
    
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1; j < n; j++){
            if(items[i].price < items[j].price && items[i].price != items[j].price){
                min_new = i;
                if(items[min].price <= items[min_new].price) min = min;
                else min = min_new;
            } else {
                min_new = j;
                if(items[min].price <= items[min_new].price) min = min;
                else min = min_new;
            }
        }
    }
    
    printf("%s %lld\n", items[min].name, items[min].price);
    
    return 0;
}