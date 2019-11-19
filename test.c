#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
//int efcz(int* arr, int size, int tofind){
//	int left = 0;
//	int right = size - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] < tofind){
//			left = mid + 1;
//		}
//		else if (arr[mid]>tofind){
//			right = mid - 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//
//}
void Printnum(int num){
	if (num > 9){
		Printnum(n / 10);
	}
	printf("%d ", num % 10);
}
int main(){
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int ret = efcz(arr, size, 3);
	//printf("ret=%d\n", ret);
	
	printf("%d", Printnum(1234));
	system("pause");
	return 0;
}