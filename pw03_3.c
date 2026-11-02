#include <stdio.h>
int main(){
    int n;
    int n3 = 0;
    int n5 = 0;
    int sum3 = 0;
    int sum5 = 0;
    while(scanf("%d",&n) == 1 && n != 0){
        if (n % 3 == 0 && n % 5 != 0){
            sum3 += n;
            n3++;
        } else if (n % 5 == 0 && n % 3 != 0){
            sum5 += n; 
            n5++;
        }else if (n % 5 == 0 && n % 3 == 0){
            sum3 += n;
            sum5 += n;
            n3++;
            n5++;
        }
    }
    printf("nums of divisible by 3: %d\n",n3);
    printf("mean : %.4f\n", (float)sum3/n3);
    printf("nums of divisible by 5: %d\n",n5);
    printf("mean : %.4f\n", (float)sum5/n5);
    return 0;
    // у оператора && приоритет выше, чем у ||, и выполняется сначала выражение с ним. 
    // Для оператора &&: если первое выражение равно 0, то дальше можно не считать, так как все выражение будет равно 0
    // Для оператора ||: если первое выражение равно 1, то и все выражение равно 1
}