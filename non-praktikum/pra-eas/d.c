#include<stdio.h>
#include<string.h>
#define ll long long

void reverse(char s[], ll left, ll right){
    if(left >= right) return;
    char temp = s[right];
    s[right] = s[left];
    s[left] = temp;
    reverse(s, left + 1, right - 1);
}

int main(){
    char s[205];
    scanf("%s", s);
    
    ll end = strlen(s) - 1;
    reverse(s, 0, end);
    
    printf("%s\n", s);
    
    return 0;
}