#include<stdio.h>
int main(){
	int n;
	printf("Kich thuoc cua mang n la: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	float a=0;
	for(int i=0;i<n;i++){
		a+=arr[i];
	}
	float TBC=a/n;
	printf("TBC cua mang la: %f",TBC);
}
