#include <stdio.h>
float TrungBinhCong(int arr[],int n){
	printf("So phan tu trong mang: \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int y=0;
	float TBC;
	for(int i=0;i<n;i++){
		y = y + arr[i];
		 TBC = (float)y/n;
	}
	return TBC;
}
