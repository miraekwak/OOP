#include <stdio.h>
void swap(int*, int*); 
int main() {
	int a = 15213;
	int b = 91125;
	swap(&a, &b);
	printf(a +" "+b);
	return 0;
}
void swap(int* a, int* b) {
	int temp = &a;
	a = *b;
	b = &temp;
}