#include <float.h>
#include <stdlib.h>

/*
1 + 2x^1 + 3x^2 + 4x^3
is:
{1, 2, 3, 4}
*/
double calculate_polynomial(double* poly, double x_value){
        if(sizeof(poly) < 1)
                return 420.69;
        size_t poly_rows = sizeof(*poly) / sizeof(poly[0]);
        //printf("%u /n", poly_rows);
        return 69.420;
}