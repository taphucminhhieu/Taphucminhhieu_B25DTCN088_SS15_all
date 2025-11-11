#include <stdio.h>
int phan_tu_xuat_hien_nhieu_nhat;    
int so_lan_xuat_hien_nhieu_nhat; 
void find_most_frequent(int arr[], int n) {
    if (n <= 0) {
        phan_tu_xuat_hien_nhieu_nhat = -1;
        so_lan_xuat_hien_nhieu_nhat = 0; 
        return;
    }
    
    int maxCount = 0;
    int number3 = arr[0]; 
    
    for(int i = 0; i < n; i++) {
        int currentCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            number3 = arr[i];
        }
    }
    phan_tu_xuat_hien_nhieu_nhat = number3;
    so_lan_xuat_hien_nhieu_nhat = maxCount; 
}

int main() {
    int arr[100];
    int n;
    
    printf("Nhap so phan tu trong mang: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        printf("Gia tri n khong hop le.\n");
        return 1;
    }
    
    for(int j = 0; j < n; j++){
        printf("Nhap gia tri arr[%d]: ", j);
        if (scanf("%d", &arr[j]) != 1) {
             printf("Loi nhap lieu.\n");
             return 1;
        }
    }
    find_most_frequent(arr, n); 
    printf("Phan tu xuat hien nhieu nhat: %d\n", phan_tu_xuat_hien_nhieu_nhat);
    printf("So lan xuat hien: %d\n", so_lan_xuat_hien_nhieu_nhat);

    return 0;
}
