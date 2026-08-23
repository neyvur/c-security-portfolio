#include <stdio.h>

int my_str(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        ++len;
    }
    return len;
}

int main(){
    char str[100];
    int len = 0;
    printf("Enter some word: ");
    scanf("%99s", str);
    len = my_str(str);
    printf("result: ");
    for(int i = len - 1; i >= 0; --i){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}