#include <stdio.h>
#include <string.h>

void main() {
    char c[100]="hello world";
    char d[100]={0};
    for (int i=0,j= strlen(c)-1;i< strlen(c);i++,j--) {
        d[j]=c[i];
    }
    puts(d);
}
