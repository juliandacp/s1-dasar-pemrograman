#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char s1[105];
    char s2[105];
    scanf("%s", s1);
    scanf("%s", s2);
    
    ll sum = 0;
    if(strlen(s1) != strlen(s2)){
        printf("TIDAK\n");
        return 0;
    }
    
    ll count1[27] = {0};
    ll count2[27] = {0};
    
    for(ll i = 0; i < strlen(s1); i++){
        char c = tolower(s1[i]);
        count1[c - 'a']++;
    }
    
    for(ll i = 0; i < strlen(s2); i++){
        char c = tolower(s2[i]);
        count2[c - 'a']++;
    }
    
    ll cek = 1;
    for(ll i = 0; i < 26; i++){
        if(count1[i] != count2[i]){
            cek = 0;
            break;
        }
    }
    
    if(cek) printf("YA\n");
    else printf("TIDAK\n");
    
    return 0;
}