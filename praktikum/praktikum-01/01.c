#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll x1, y1, x2, y2;
    float direction1;
    scanf("%lld %lld %f %lld %lld", &x1, &y1, &direction1, &x2, &y2);

    float direction2 = atan2((y2 - y1), (x2 - x1));
    float difference = fabs(direction1-direction2);

    if(x1 == x2 && y1 == y2) printf("Halo, Dan, aku Iel.");
    else if(difference < 0.01) printf("Aku akan berjalan lurus ke Dan!");
    else printf("Aku akan berputar ke arah tujuan!");

    return 0;
}