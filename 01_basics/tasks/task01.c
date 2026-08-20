// #include <stdio.h>

// int main(){
//     int fahr, celsius;
//     int lower, uper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;

//     while (fahr <= upper){
//         celsius = 5 * (fahr - 32) / 9;
//         printf("%d\t%d\n", fahr, celsius);
//         fahr = fahr + step;
//     }
//     return 0;
// }

#include <stdio.h>
int celsium_from_fahr(int fahr){
    return 5 * (fahr - 32) / 9;
}
int main(void){
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    printf("Fahr\t\tCelsium\n");
    for(int fahr = lower; fahr <= upper; fahr += step){
        printf("%3d\t\t%3d\n", fahr, celsium_from_fahr(fahr));
    }
    return 0;
}