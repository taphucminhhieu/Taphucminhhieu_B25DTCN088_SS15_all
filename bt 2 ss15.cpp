#include<stdio.h>
int sum(int n){
	int total =0;
	int digit;
	if(n<0){
	printf("loi so nhap lai\n");
	}
	while(n>0){
	digit =n %10 ;
	total = total + digit;
	n=n/10;
	}
	return total;
}

int main () {
	int a;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&a);
	int c= sum(a);
	printf("tong = %d",c);


return 0;
}
