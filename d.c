#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
void init(int* arr, int i){
	for (int i = 0; i < 5; i++){
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void empty(int* arr,int i){
		arr[i] = 0;
		printf("%d\n", arr[i]);
}
void reverse(int*arr, int i){
	for (int i = 4; i >=0; i--){
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[5];
	init(arr, 5);
	empty(arr, 5);
	reverse(arr, 5);

	system("pause");
	return 0;
}