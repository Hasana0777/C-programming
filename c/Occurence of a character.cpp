#include<stdio.h>
#include<string.h>
int main(){
	int n=1000;

	char str[n];
	printf("enter the sting: ");
    gets(str);
    printf("\n");
    
	char a;
	printf("enter one character:");
    a = getchar();
	int count=0;
	for(int i=0;str[i];i++){
		if(str[i]==a){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
