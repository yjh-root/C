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
                        printf("%d��10Ԫ,%d��5Ԫ,%d��2Ԫ,%d��1Ԫ\n",a,b,c,d);
                        total++;
                    }
                }
            }
        }
    }
    printf("����%d�ַ���",total);
}
