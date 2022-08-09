#include<stdio.h>
#include<conio.h>

void func(int);

int main() {
	
	int n;
	
	printf("Enter your number:  ");
	scanf("%d", &n);
	func(n);
	
}

void func(int n) {

	if (n >= 0) {
		printf("The number %d is positive number.", n);
	} else {
		printf("The number %d is negative number.", n);
	}
}
