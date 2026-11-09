#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    char encryption[1000005];
    char decryption[1000005];
    scanf("%[^\n]s", encryption);

    char flag[] = "[r0selleGustav]";
    ll flag_len = strlen(flag);
    ll encryption_len = strlen(encryption);
    ll found = 0;

    for(ll shift = 0; shift <= 95; shift++){
        for(ll i = 0; i < encryption_len; i++){
            ll temp = encryption[i] + shift;
            while(temp < 32) temp += 95;
            while(temp > 126) temp -= 95;
            decryption[i] = temp;
        }

        decryption[encryption_len] = '\0';

        if(encryption_len >= flag_len){
            ll check = 1;
            for(ll j = 0; j < flag_len; j++){
                if(decryption[encryption_len - flag_len + j] != flag[j]){
                    check = 0;
                    break;
                }
            }

            if(check){
                printf("%s\n", decryption);
                found = 1;
                break;
            }
        }
    }

    if(!found) printf("Unidentified Sequence.\n");

    return 0;
}