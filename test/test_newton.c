#include <stdbool.h>

#include "../src/newton.c"

#define SUCCESS true
#define FAILURE	false

void test_compare_double(){
	printf("Testing compare_double\n");
	double tests[3][4] = {
		{1234.56, 1234.5, 1, true},
		{0.567, 0.1, 1, false},
		{1234, 1434, -4, true}
	};
	bool case_result;
	bool test_result = SUCCESS;
	int size = sizeof(tests)/ sizeof(tests[0]);
	for(int n = 0; n < size; n++){
		case_result = compare_double(tests[n][0], tests[n][1], tests[n][2]);
		if(case_result != tests[n][3]) {
			printf("\ttest case no %d - %f, %f, %f, equals %d shoud equal %f\n",
			       n + 1, tests[n][0], tests[n][1], tests[n][2], case_result, tests[n][3]);
			test_result = FAILURE;
		}
	}
	if(!test_result)
		printf("\tTest failed\n");
	else
		printf("\tTest success\n");
}

int main(){
	test_compare_double();
	return 0;
}
