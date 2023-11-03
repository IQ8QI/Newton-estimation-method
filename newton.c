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
        const int iteration = 100;

        int n = 0;                   //Number of iteration
        double xn = 1200000;         //Guess first answear

        printf("Zero-iteration guess is: %f\n", xn);

        for(n = 0; n < iteration; n++){
                xn = xn - (f(xn) / fdx(xn));
                printf("xn%d = %f\n", n, xn);
        }

        return 0;
}
