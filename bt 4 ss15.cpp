#include<stdio.h>

int sum(int arr[],int n){
	int sum =0;
	for(int j=0;j<n;j++){
	sum +=arr[j];
	}
return sum;
}

int main () {
	int arr[100];
	int n;
	printf("gia tri trong mang: ");
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		printf("gia tri arr: ",j);
		scanf("%d",&arr[j] );
	}



 int b = sum(arr,n);
    printf("tong cua mang so nguyen la: %d ",b);
return 0;
}



