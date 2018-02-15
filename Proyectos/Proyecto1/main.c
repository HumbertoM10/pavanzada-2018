#include <stdio.h>
#include <math.h>
#define MAX_LONGLONG 9223372036854775807

unsigned long long int nCalculator(unsigned long long int x){
	return sqrt(x*2);
}

int main(int argc, char const *argv[])
{
	unsigned long long int input;
	printf("%s","What is the result of calculations on the supercomputer?");
	scanf("%llu",&input);
	if(input <= MAX_LONGLONG){
		printf("result: %llu\n", nCalculator(input));
	}else{
		printf("result: %s\n", "A number of this size is not supported please try again");
	}
	
	return 0;
}