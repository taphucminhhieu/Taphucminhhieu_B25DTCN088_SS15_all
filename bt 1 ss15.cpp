#include<stdio.h>
#include<math.h>
int signal(int a, int b){
	return a-b;
}
int tich(int a ,int b){
	return a*b;
}
int main() {
	int a,b;
	printf("nhap 2 so a va b: ");
	scanf("%d%d",&a,&b);
	int c= signal(a,b);
	printf("ket qua cua chenh lech 2 so nay la: %d - %d = %d\n",a,b,c);
	int d = tich(a,b);
	printf("ket qua tra ve: %d * %d = %d\n",a,b,d);

return 0; 
}
