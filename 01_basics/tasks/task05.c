#define TABSTOP 4

#include <stdio.h>

int main(){
    int count = 0;
    int c;

    while((c = getchar()) != EOF){
        if (c == '\t'){
            int spase = TABSTOP - (count % TABSTOP);
            for(int i = 0; i < spase; i++){
                putchar(' ');
            }
            count += spase;
        } else if(c == '\n') {
            putchar(c);
            count = 0;
        }else{
            putchar(c);
            count++;
        }
    }
    return 0;
}