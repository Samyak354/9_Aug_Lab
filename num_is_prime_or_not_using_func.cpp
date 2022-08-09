#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void func(int);

int main() {
	
	int n;
	
	printf("Enter your number:  ");
	scanf("%d", &n);
	func(n);
	
}

void func(int n) {
	
	int div=0;
	
	if (n<=0) {
		printf("Invalid number.");
		exit(0);
	}
	
	for (int i=2; i<n/2; i++) {
		
		if (n%i==0) {
			div +=1;
		}
		
	}
	if (div >= 1) {
		printf("The number %d is not a prime number.", n);
	} else {
		printf("The number %d is a prime number.", n);
	}
}
