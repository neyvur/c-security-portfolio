#include <stdio.h>

void add_ten(int *x){
    *x = *x + 10;
    printf("after: %d\n", *x);
}

int main(){

    int number = 5;
    printf("before: %d\n", number);

    add_ten(&number);

    printf("after: %d\n", number);

    return 0;
}