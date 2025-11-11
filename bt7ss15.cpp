#include <stdio.h>

int binarySearch(const int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == target) {
            return mid;        
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int sortedArray[] = {5, 12, 18, 23, 40, 55, 61, 78};
    int n = sizeof(sortedArray) / sizeof(sortedArray[0]);
    
    int target1 = 40;
    int target2 = 30;
    int index1 = binarySearch(sortedArray, n, target1);
    if (index1 != -1) {
        printf("phan tu tim dc o chi so: %d\n", target1, index1);
    } else {
        printf("ko thay phan tu.\n", target1);
    } 
    int index2 = binarySearch(sortedArray, n, target2);
    if (index2 != -1) {
        printf("phan tu tim dc o chi so: %d\n", target2, index2);
    } else {
        printf("ko thay phan tu.\n", target2);
    }
    return 0;
}
