#include <stdio.h>
int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper){    //while la loop
        celsius = 5.0  * (fahr-32.0) / 9.0 ;
        printf("%3.4f\t%6.1f\n", fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
}

// float de hien thi so co phay vd: 0.3434
// int so bth