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
    int len;

    printf("enter word: ");
    scanf("99%s", str);

    len = my_str(str);

    int right = len - 1;
    int left = 0;
    int palindrome = 0;
    int not_palinfrome = 0;

    while(left > right){
        if (str[left] != str[right]){
            palindrome = 0;
            break;
        }
        ++left;
        --right;
    }

    if(palindrome){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }

    return 0;
}