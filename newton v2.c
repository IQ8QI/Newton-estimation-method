#include <stdio.h>
#include <math.h>

// f(x) = 6x^3 + 2x^2 - 7x
double f(double x){
        return 6 * pow(x, 3) + 2 * pow(x, 2) - 7 * x;
}

// f'(x) = 18x^2 + 4x - 7
double fdx(double x){
        return 18 * pow(x, 2) + 4 * x - 7;
}

int main() {
        const int input = 612;

        double xn = 1200000;         //Guess first 
        double xn_last;
        unsigned int n = 0;
        printf("Zero-iteration guess is: %f\n", xn);

        while(xn != xn_last){
                xn_last = xn;
                xn = xn - (f(xn) / fdx(xn));
                printf("xn%d = %f\n", n++, xn);
        }

        return 0;
}