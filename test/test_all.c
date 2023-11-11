#include <stdbool.h>

#include "../src/newton.c"
#include "../src/calculate_polynomial.c"

#define SUCCESS true
#define FAILURE	false
#define MAX_POLY_ELEMENTS 15

void test_compare_double(){
	printf("Testing compare_double\n");
	double tests[][4] = {
		{1234.56, 1234.5, 1, true},
		{0.567, 0.1, 1, false},
		{1234, 1434, -4, true},
		{789.48573974, 789.94202358745, 0, true}
	};
	bool case_result;
	bool test_result = SUCCESS;
	int size = sizeof(tests)/ sizeof(tests[0]);
	int n;
	for(n = 0; n < size; n++){
		case_result = compare_double(tests[n][0], tests[n][1], tests[n][2]);
		if(case_result != tests[n][3]) {
			printf("\ttest case no %d - %f, %f, %f, equals %d should equal %f\n",
			       n + 1, tests[n][0], tests[n][1], tests[n][2], case_result, tests[n][3]);
			test_result = FAILURE;
		}
	}
	if(test_result == FAILURE)
		printf("\tTest failed\n");
	else
		printf("\tTest success\n");
}

void test_calculate_polynomial(){
	printf("Testing calculate_polynomical\n");
	double polys[][MAX_POLY_ELEMENTS] = {
		{1, 2, 3, 4},
		{1}
	};
	double tests[3][3] = {
		//{poly_index, x_value, expected_result}
		{0, 0, 1.0},
		{0, 2, 49.0},
		{0, 5.89, 934.202}
	};
	double case_result = 0.0;
	bool test_result = SUCCESS;
	int size = sizeof(tests)/ sizeof(tests[0]);
	int n;
	for(n = 0; n < size; n++){
		case_result = calculate_polynomial(polys[(int)tests[n][0]], tests[n][1]);
		if(case_result != tests[n][2]) {
			printf("\ttest case no %d - poly %d, x = %f, equals %f should equal %f\n",
			       n + 1, (int)tests[n][0], tests[n][1], case_result, tests[n][2]);
			test_result = FAILURE;
		}
	}
	if(test_result == FAILURE)
		printf("\tTest failed\n");
	else
		printf("\tTest success\n");
}

int main(){
	test_compare_double();
	test_calculate_polynomial();
	return 0;
}
