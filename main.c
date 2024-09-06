#include <stdio.h>

void main() {
    int a,b,c,d;
    int total;
    int count;
    for (int a = 1; a <= 10; ++a) {
        for (int b = 1; b <= 20; ++b) {
            for (int c = 1; c <= 40; ++c) {
                for (int d = 1; d <= 40; ++d) {
                    if(a+b+c+d==40&&10*a+5*b+2*c+d==100){
                        printf("%d张10元,%d张5元,%d张2元,%d张1元\n",a,b,c,d);
                        total++;
                    }
                }
            }
        }
    }
    printf("共有%d种方法",total);
}
