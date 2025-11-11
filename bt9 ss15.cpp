#include <stdio.h>
int inputTotalElement(int max);
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
void minDisplayOfElement(int arr[], int n);

int main(){
	const int max = 100;
	int arr[max];
	int n;
	
	
	n = inputTotalElement(max);	
	
	inputArray(arr,n);
	
	displayArray(arr,n);
		
	minDisplayOfElement(arr,n);
}

int inputTotalElement(int max){
	int n;
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1 || n>max){
			printf("\nNhap lai n\n");
		}
	}while(n<1 || n>max);
	return n;
}
void inputArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void displayArray(int arr[], int n){
	printf("\nMang ban dau: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
void minDisplayOfElement(int arr[], int n){
	int minDisplay = 100, count;
	
	for(int i=0;i<n;i++){
		count = 0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		if(minDisplay>count){
			minDisplay = count;
		}
	}
	
	printf("\nCac phan tu xuat hien it nhat (%d lan) trong mang la: \n",minDisplay);
	for(int i=0;i<n;i++){
		count = 0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		if(minDisplay==count){
			printf("%d  ",arr[i]);
		}
	}
}
