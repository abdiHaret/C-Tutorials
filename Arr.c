#define N 10
#include <stdio.h>
int main(){
	int arr[N];
	for(int i = 0; i <= N; i++){
		printf("Enter the input for index %d :", i); 
		scanf("%d:", &arr[i]);
	}
	for(int i = 0; i <= N.length; i++){
		printf("%d, ", arr[i]);
	}

	return 0;
}