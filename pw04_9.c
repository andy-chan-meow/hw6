#include <stdio.h>
int main(){
    double salary; // double точнее
    scanf("%lf", &salary);
    if (salary < 1000.0){
        printf("taxes: %.2lf\n", 0.12 * salary);
    } else if (salary >= 1000.0 && salary < 3000.0){
        printf("taxes: %.2lf\n", 0.18 * salary);
    } else {
        printf("taxes: %.2lf\n", 0.25 * salary);
    }
    return 0;
}