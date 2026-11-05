#include <stdio.h>
int main(){
    int q;
    
    int val;
    while (1) {
        printf("Converter\n 1)B -> KB\n 2)KB -> MB\n 3)MB -> GB\n 4) bit -> B\n 5)Quit\n Enter num of convertion and value: ");
        if(scanf("%d %d",&q, &val) != 2 ) {
            printf("Bad format\n"); 
            while(getchar() != '\n');
            continue;
        }
        switch(q){
            case 1: printf("%dB equals %.1lfKB\n", val, (double)val/1024); break;
            case 2: printf("%dKB equals %.1lfMB\n", val, (double)val/1024); break;
            case 3: printf("%dMB equals %.1lfGB\n", val, (double)val/1024); break;
            case 4: printf("%dbit equals %dB\n", val, val/8); break;
            case 5: printf("Bye\n") ; return 0;
            default: printf("Unknown option\n");
    }
}
    return 0;

}