#include <stdio.h>

#define PIE 3+2
int main() {
    int a;
    while (scanf("%d",&a)){
        if(3<a<10){
            printf("a在3和10之间\n");
        }
        else{
            printf("a不在3和10之间\n");
        }
    }
}
