#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    char code[100];
    scanf("%s", code);
    ll length = strlen(code);
    ll counter = 0;
    char *compare = code;
    for(ll i = 0; i < length; i++){
        printf("%c", *compare);
        compare += i + 1;
        counter += i + 1;
        if(counter > length) break;
    }
    
    return 0;
}