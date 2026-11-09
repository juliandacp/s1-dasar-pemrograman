#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

typedef struct{
    char name[101];
    ll price;
    ll stock;
} Item;

void print_catalog(Item catalog[], ll n){
    for(ll i = 0; i < n; i++) printf("%s %lld %lld\n", catalog[i].name, catalog[i].price, catalog[i].stock);
}

void swap_Item(Item *a, Item *b){
    Item tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_price(Item catalog[], ll n){
    for(ll i = 0; i < n - 1; i++){
        for(ll j = i + 1; j < n; j++){
            if(catalog[i].price > catalog[j].price) swap_Item(&catalog[i], &catalog[j]);
        }
    }
}

void max_stock(Item catalog[], ll n){
    ll idx = 0;
    for(ll i = 1; i < n; i++){
        if(catalog[i].stock > catalog[idx].stock) idx = i;
    }
    printf("%s %lld %lld\n", catalog[idx].name, catalog[idx].price, catalog[idx].stock);
}

void update_Item(Item catalog[], ll x, ll new_price, ll new_stock){
    catalog[x].price = new_price;
    catalog[x].stock = new_stock;
}

int main(){
    ll n;
    scanf("%lld", &n);
    Item catalog[n + 5];
    for(ll i = 0; i < n; i++) scanf("%s %lld %lld", catalog[i].name, &catalog[i].price, &catalog[i].stock);
    
    ll m;
    scanf("%lld", &m);
    char cmd[20];
    while(m--){
        scanf("%s", cmd);
        if(!strcmp(cmd, "PRINT")) print_catalog(catalog, n);
        else if(!strcmp(cmd, "SWAP")){
            ll a, b;
            scanf("%lld %lld", &a, &b);
            swap_Item(&catalog[a], &catalog[b]);
        }
        else if(!strcmp(cmd, "SORT")) sort_price(catalog, n);
        else if(!strcmp(cmd, "MAXSTOCK")) max_stock(catalog, n);
        else if(!strcmp(cmd, "UPDATE")){
            ll x;
            ll new_price, new_stock;
            scanf("%lld %lld %lld", &x, &new_price, &new_stock);
            update_Item(catalog, x, new_price, new_stock);
        }
    }
    return 0;
}