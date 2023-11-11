#include <stdbool.h>

#include "../src/newton.c"

int main(){
    double x1 = 1234.56;
    double x2 = 1234.5;
    bool result = compare_double(x1, x2, 1);
    printf("%i\n", result);
    return 0;
}