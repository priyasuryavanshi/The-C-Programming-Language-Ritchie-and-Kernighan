#include <stdio.h>

int main() {
    float fahr,celsius;
    int step=20;
    int lower =0;
    int upper =300;
    fahr =lower;
    printf("Fahrenheit Celsius \n");
    while(fahr<=upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f     %6.1f \n", fahr,celsius);
        fahr += step;
    }
    
    
    return 0;
}