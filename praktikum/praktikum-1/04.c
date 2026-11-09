#include<stdio.h>
#define ll long long

int main(){
    unsigned short d1, h1, m1, d2, h2, m2;
    char jenis, opsi;
    scanf("%hu %hu:%hu\n", &d1, &h1, &m1);
    scanf("%hu %hu:%hu\n", &d2, &h2, &m2);
    scanf("%c\n", &jenis);
    scanf("%c", &opsi);

    ll day, hour, minute, entry, exit, cost = 0;
    entry = d1 * 24 * 60 + h1 * 60 + m1;
    exit = d2 * 24 * 60 + h2 * 60 + m2;

    if(exit < entry) printf("Tidak mungkin");
    else{
        ll difference = exit - entry;
        day = difference / (24 * 60);
        hour = difference % (24 * 60) / 60;
        minute = difference % (24 * 60) % 60;

        if(jenis == 'M'){
            ll total_hour = hour;

            if(day > 0){
                cost = day * 150000 + 10000;
                if(minute > 0) total_hour += 1;
                cost += total_hour * 2000;
            }else{
                if(minute > 0) total_hour += 1;
                if(total_hour > 3) cost += 10000 + (total_hour - 3) * 2000;
                else cost += 10000;
            }
        }else if(jenis == 'S'){
            cost += 3000;
            cost += day * 50000;
        }

        ll discount = 0;
        ll max_discount = 0;

        if(opsi == 'b'){
            discount = cost * 20 / 100;
            max_discount = 10000;
            if(discount > max_discount) discount = max_discount;
            cost -= discount;
        }else if(opsi == 'c'){
            discount = cost * 10 / 100;
            max_discount = 20000;
            if(discount > max_discount) discount = max_discount;
            cost -= discount;
        }

        printf("Anda telah berada di sini selama %lld hari, %lld jam, dan %lld menit. Anda harus membayar sebesar %lld rupiah", day, hour, minute, cost);
    }

    return 0;
}