#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// f(x) = 6x^3 + 2x^2 - 7x
double f(double x){
        return 6 * pow(x, 3) + 2 * pow(x, 2) - 7 * x;
}

// f'(x) = 18x^2 + 4x - 7
double fdx(double x){
        return 18 * pow(x, 2) + 4 * x - 7;
}

bool compare_double(double x1, double x2, int precision){
        int x1_int, x2_int;
        x1_int = x1 * precision;
        x2_int = x2 * precision;
        return x1_int == x2_int
}

double find_zero(double first_guess) {
        double xn = first_guess;         //First guess
        double xn_last;
        unsigned int n = 0;

        while(xn != xn_last){
                xn_last = xn;
                xn = xn - (f(xn) / fdx(xn));
                printf("xn%d = %f\n", n++, xn);
        }

        return xn;
}

int main(){
        printf("result is %f\n", find_zero(1200000));
        return 0;
}