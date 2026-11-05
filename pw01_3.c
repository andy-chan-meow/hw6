#include <stdio.h>
#include <ctype.h>

int main(){
    char q ;
    int n = 0;
    int l = 0;
    int o = 0;
    while( (q = getchar() ) != '#' && (q =getchar()) != EOF){
       
        if (isdigit(q)){
            n++;
        }else if (isalpha(q)){
            l++;
        }else{
            o++;
        }
    } 
    printf("\nnum of digit: %d\n", n);
    printf("num of letters: %d\n", l);
    printf("num of other chars: %d\n", o);
    return 0;
}