#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    ll N;
    scanf("%lld", &N);

    char S[201][51];
    ll family[201] = {0};
    ll friend[201] = {0};
    ll male[201] = {0};
    ll female[201] = {0};

    for(ll i = 0; i < N; i++){
        ll M;
        scanf("%lld %s", &M, S[i]);

        for(ll j = 0; j < M; j++){
            char number[21];
            scanf("%s", number);

            char idx[9];
            idx[0] = number[0];
            idx[1] = number[1];
            idx[2] = number[2];
            idx[3] = number[4];
            idx[4] = number[5];
            idx[5] = number[7];
            idx[6] = number[8];
            idx[7] = number[9];
            idx[8] = '\0';

            ll check_family = 1;
            ll check_friend = 1;
            ll check_male = 1;
            char previous_idx = idx[0];

            for(ll k = 1; k < 8; k++){
                if(idx[k] != idx[0]) check_family = 0;
                if(idx[k] > previous_idx) check_friend = 0;
                if(idx[k] < previous_idx) check_male = 0;
                previous_idx = idx[k];
            }

            if(check_family) family[i]++;
            else if(check_friend) friend[i]++;
            else if(check_male) male[i]++;
            else female[i]++;
        }
    }

    ll max_family = 0, max_friend = 0, max_male = 0, max_female = 0;

    for(ll i = 0; i < N; i++){
        if(family[i] > max_family) max_family = family[i];
        if(friend[i] > max_friend) max_friend = friend[i];
        if(male[i] > max_male) max_male = male[i];
        if(female[i] > max_female) max_female = female[i];
    }

    printf("Cari kontak keluarga, hubungi ");
    ll check = 1;

    for(ll i = 0; i < N; i++){
        if(family[i] == max_family){
            if(!check) printf(", ");
            printf("%s", S[i]);
            check = 0;
        }
    }
    printf("\n");

    printf("Cari kontak sahabat, hubungi ");
    check = 1;

    for(ll i = 0; i < N; i++){
        if(friend[i] == max_friend){
            if(!check) printf(", ");
            printf("%s", S[i]);
            check = 0;
        }
    }
    printf("\n");

    printf("Cari kontak cowok, hubungi ");
    check = 1;

    for(ll i = 0; i < N; i++){
        if(male[i] == max_male){
            if(!check) printf(", ");
            printf("%s", S[i]);
            check = 0;
        }
    }
    printf("\n");

    printf("Cari kontak cewek, hubungi ");
    check = 1;

    for(ll i = 0; i < N; i++){
        if(female[i] == max_female){
            if(!check) printf(", ");
            printf("%s", S[i]);
            check = 0;
        }
    }
    printf("\n");

    return 0;
}