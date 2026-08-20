#include <stdio.h>
#include <string.h>

void add_five(int x){
    x = x + 10;
    printf("after: %d\n", x);
}
int main(){
    int number;
    number = 10;

    printf("before: %d\n", number);

    add_five(number);
    
    return 0;
}