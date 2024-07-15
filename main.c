#include <stdio.h>

#define PIE 3+2
int main() {
    int i;
    int ret;
    char c;
    float f;
//    scanf("%d",&i);
//    printf("i=%d\n",i);
//    fflush(stdin);
    ret=scanf("%d %c %f",&i,&c,&f);
    printf("c=%c\n",c);
//    scanf("%f",&f);
//    printf("f=%f\n",f);
    return 0;
}
