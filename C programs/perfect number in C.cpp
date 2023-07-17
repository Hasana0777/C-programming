#include<stdio.h>
int main(){
	printf("Enter the Number:");
	int n,i,ans=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
		    ans=ans+i;
		}
	}
	if(ans==n){
		printf("it is Perfect Number");
	}
	else{
	
	printf("it is not a Perfect Number");
}

return 0;
}
