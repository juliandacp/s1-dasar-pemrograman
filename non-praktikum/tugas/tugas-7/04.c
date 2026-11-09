#include<stdio.h>
#define ll long long

typedef struct{
    char name[100];
    ll age;
    double gpa;
} student;

int main(){
    student m;
    scanf("%s", m.name);
    scanf("%lld", &m.age);
    scanf("%lf", &m.gpa);
    
    printf("Nama: %s, Umur: %lld tahun, IPK: %.2lf\n", m.name, m.age, m.gpa);
    
    return 0;
}