#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char s[205];
    scanf("%[^\n]s", s);
    
    char kalimat[205];
    ll idx = 0;
    for(ll i = 0; i < strlen(s); i++) if(s[i] != ' ') kalimat[idx++] = tolower(s[i]);
    
    kalimat[idx] = '\0';
    
    ll cek = 1;
    for(ll i = 0; i < strlen(kalimat) / 2; i++){
        if(kalimat[i] != kalimat[strlen(kalimat) - i - 1]){
            cek = 0;
            break;
        }
    }
    
    if(cek) printf("Palindrome\n");
    else printf("Bukan Palindrome\n");
    
    return 0;
}