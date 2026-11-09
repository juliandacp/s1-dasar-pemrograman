#include<stdio.h>
#include<string.h>
#define ll long long

typedef struct{
    char cmd[105];
    ll r, c, x;
    ll len;
}Blob;

int main(){
    ll n, r, c;
    scanf("%lld", &n);
    scanf("%lld %lld", &r, &c);

    ll arr[r + 5][c + 5];
    Blob blob[n];

    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++) arr[i][j] = 0;
    }

    for(ll i = 0; i < n; i++){
        scanf("%lld %lld %lld %lld", &blob[i].r, &blob[i].c, &blob[i].x, &blob[i].len);
        scanf(" %s", blob[i].cmd);
        arr[blob[i].r][blob[i].c] += blob[i].x;
    }

    ll q;
    scanf("%lld", &q);

    for(ll i = 0; i < q; i++){
        ll y;
        scanf("%lld", &y);

        for(ll j = 0; j < blob[y].len; j++){
            if(blob[y].cmd[j] == 'W') blob[y].r--;
            else if(blob[y].cmd[j] == 'S') blob[y].r++;
            else if(blob[y].cmd[j] == 'A') blob[y].c--;
            else if(blob[y].cmd[j] == 'D') blob[y].c++;

            if(blob[y].x % 2 == 1) blob[y].x = blob[y].x * 3 + 1;
            else blob[y].x /= 2;

            arr[blob[y].r][blob[y].c] += blob[y].x;
        }
    }

    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++) printf("%lld ", arr[i][j]);
        printf("\n");
    }

    return 0;
}