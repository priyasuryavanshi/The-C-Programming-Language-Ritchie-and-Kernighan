#include <stdio.h>

int main() {
    float fahr,celsius;
    int step=10;
    int lower =0;
    int upper =100;
    celsius = lower;
    printf("Celsius Fahrenheit \n");
    while(celsius <= upper) {
        fahr = (9.0*celsius/5.0 )+32;
        printf("%7.0f %6.0f \n", celsius,fahr);
        celsius += step;
    }
    
    
    return 0;
}