#include<stdio.h>
int main(){
	int rev=0;
	int n;
	printf("enter the digit");
	scanf("%d",&n);
	while(n!=0){
	
	  int r=n%10;
	  rev=rev*10+r;
		n=n/10;
	}

	printf("return reverse: %d",rev);
	return 0;
}
