#include <stdio.h>
#include <math.h>
#define MAX_N 1000000

unsigned long long int combinations(unsigned long long int n, unsigned long long int x){
	unsigned long long int nFact=1;
	unsigned long int result=0;
	unsigned long int result1=0;
	for(int i=1; i<=n; i++){
		nFact = (nFact*i)%1000000007ll;
	}
	if(x<n-1){
		for(int i=1; i<=n-2; i++){
			unsigned int m = n-x;
			unsigned int sum = 0;
			unsigned long long int mult = 1;
			unsigned long long int mFact=1;
			for(int f=1; f<=m; f++){
				mFact = (mFact*f)%1000000007ll;
			}
			if(x==1){
				sum=n;
			}else{
				for(int j=1; j<=m+1; j++){
					sum=sum+j;
				}
			}
			for(int j=1; j<=m-1; j++){
				unsigned int sum2=0;
				for(int k=1; k<=j; k++){
					sum2=sum2+k;
				}
				mult = (mult*sum2)%1000000007ll;
			}
			result1=(nFact/mFact)*sum*m*(m-1)*mult;
		}
	}
	if(x==0){
		unsigned long long int mult = 1;
		for(int i=1; i<=n-1; i++){
			unsigned int sum2=0;
			for(int j=1; j<=i; j++){
				sum2=sum2+j;
			}
			mult = (mult*sum2)%1000000007ll;
		}
		result1 = result1 +	((n*(n-1)%1000000007ll)*mult)%1000000007ll;
	}
	return (nFact+result1)%1000000007ll;
}

int main(int argc, char const *argv[])
{
	unsigned long long int inputX, inputN;
	int t, i;
	printf("%s\n","What is the input?");
	scanf("%d", &t);
	for( i = 0; i < t; i++){
		scanf("%llu %llu",&inputN,&inputX);
		if(inputN <= MAX_N){
			printf("Case #%d: %llu\n",i+1, combinations(inputN, inputX));
		}else{
			printf("result: %s\n", "A number of this size is not supported please try again");
		}
	}
	
	return 0;
}