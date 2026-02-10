#include <stdio.h>
//function prototype
void swapValue(int *a, int *b, int *c);
//void swapArray(int a[], int b[], int size);  or
void swapArray(int *a, int *b, int size); 

int main() {
	int a = 1, b = 2, c = 3;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue( &a , &b , &c );
	printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);
	//calling swapArray()
	int ar1[]= {5,9,3},ar2[]={6,89,4},i;
	printf("Before\nar1 = ");
	for(i=0;i<3;i++){
		printf("%d ",ar1[i]);
	}
	printf("\nar2 = ");
	for(i=0;i<3;i++){
		printf("%d ",ar2[i]);
	}
	swapArray(ar1,ar2,3);
	printf("\nAfter\nar1 = ");
	for(i=0;i<3;i++){
		printf("%d ",ar1[i]);
	}
	printf("\nar2 = ");
	for(i=0;i<3;i++){
		printf("%d ",ar2[i]);
	}
}
void swapValue(int *a, int *b, int *c){
	int br = *a;
	*a = *b;
	*b = *c;
	*c = br;
}
void swapArray(int *a, int *b, int size){
	int temp,i;
	for(i=0;i<size;i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
