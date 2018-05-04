#include  <stdio.h>

int main(){
   	int i,n,t,x;
    int a[500];
  	scanf("%d",&t);
 	while(t--){
        x=0;
        scanf("%d",&n);     
 		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			x^=a[i];
		}
		if(x!=0 && n%2==1)
			printf("Second\n");
        else
    		printf("First\n");			
    }
    return 0;
}					  