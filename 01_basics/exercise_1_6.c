#include <stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10]; // создание массива из 10 счетчиков для каждого числа с 0 до 9
    
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0; // инициализация всех счетчиков нулями с 0 до 9 = 0
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') 
            ++ndigit[c - '0'];  // увеличение нужного счетчика и стандартный прием в Си то есть 0 в ASCII = 48 получается 5 = 53 то есть 53 - 48 = 5
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    
    printf("цифры: ");
    for (i = 0; i < 10; ++i)
        printf("%d ", ndigit[i]);
    
    printf("\nсимволы: %d, прочее: %d\n", nwhite, nother);
    
    return 0; 
}