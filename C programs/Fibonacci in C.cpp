#include<stdio.h>
int main(){
	int first =0;
	int second = 1;
	int third;
	printf("Enter the Number:");
	int n,i;
	scanf("%d",&n);
	printf("%d %d ",first,second);
	for(i=3;i<n;i++)
	{
		third=first+second;
		printf("%d ",third);
		first=second;
		second=third;
	}
}
