#define TABSTOP 4

#include <stdio.h>

int main(){
    int count = 0;
    int c;
    int spases = 0;

    while((c = getchar()) != EOF){
        if (c == ' '){
            count++;
            spases++;
        }
        else if(c == '\n'){
            putchar(c);
            count =0;
            spases =0;
        }else{
            if (spases > 0){
                int start = count - spases;
                int dist = TABSTOP - (start % TABSTOP);

                if (dist <= spases){
                    putchar('\t');
                    spases -= dist;
                }
                for (int i = 0; i < spases; i++){
                    putchar(' ');
                }
                spases = 0;
            }
            putchar(c);
            count++;
            
        }

    }
    return 0;
}