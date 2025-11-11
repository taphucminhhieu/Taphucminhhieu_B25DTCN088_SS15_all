#include<stdio.h>
int chain( int n){
	int chain=0;
	int digit;
	
	while (n>0){
	digit=n%10;
	chain =chain*10+digit;
	n=n/10;
	}
return chain;
}
int main(){
	int n;
	printf("nhap so nguyen : ");
	scanf("%d",&n);
	int f=chain(n);
	printf("so dao ngc: %d \n",f);
}
