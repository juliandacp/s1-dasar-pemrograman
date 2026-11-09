#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    char arr[1001];
    scanf("%s", arr);

    ll count = 0;
    ll valid = 1;

    for(ll i = 0; i < strlen(arr); i++){
        if(arr[i] == '(') count++;
        else if(arr[i] == ')'){
            if(count <= 0){
                valid = 0;
                break;
            }
            count--;
        }
    }

    if(count == 0 && valid) printf("Y\n");
    else printf("G\n");

    return 0;
}