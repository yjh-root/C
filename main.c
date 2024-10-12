#include <stdio.h>
#include <string.h>

void change(int *j){
    *j=10;
}
void main() {
    int i=5;
    printf("i=%d\n",i);
    printf("i_p=%p\n",&i);
    change(&i);
    printf("i=%d\n",i);
    printf("i_p=%p\n",&i);
}