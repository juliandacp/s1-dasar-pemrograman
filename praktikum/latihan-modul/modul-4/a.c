#include<stdio.h>
#include<string.h>
#define ll long long

struct Scroll{
    char code[1005];
    char sign;
};

int main(){
    ll n;
    ll same = 0;
    ll numbers[305] = {0};
    scanf("%lld", &n);
    
    struct Scroll scrolls[n];
    for(ll i = 0; i < n; i++){
        scanf("%s %c", scrolls[i].code, &scrolls[i].sign);
    }
    
    for(ll i = 0; i < n; i++){
        ll length = strlen(scrolls[i].code);
        for(ll j = 0; j < length; j++){
            if(scrolls[i].code[j] >= '0' && scrolls[i].code[j] <= '9'){
                numbers[i] = numbers[i] * 10 + (scrolls[i].code[j] - '0');
            }
        }
    }
    
    for(ll i = 0; i < n; i++){
        for(ll j = 1; j < n; j++){
            if((numbers[i] == numbers[j]) && (scrolls[i].sign != scrolls[j].sign) && numbers[i] != -1){
                numbers[j] = -1;
                numbers[i] = -1;
                same++;
                break;
            }
        }
    }
    
    if(same == 0) printf("Tidak ada scroll yang berpasangan, kamu juga ga berpasangan\n");
    else printf("%lld\n", same);
    
    return 0;
}