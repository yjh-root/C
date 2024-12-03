#include "func.h"

void print_message(){
    printf("how do yuo do\n");
    print_start(6);
}

int print_start(int i){
    printf("********************\n");
    printf("print_start %d\n",i);
    return i+3;
}

int jc(int i){
    if(1==i)
        return 1;
    return i*jc(i-1);
}

int step(int n){
    if(1== n||2==n){
        return n;
    }
    return step(n-1)+ step(n-2);
}