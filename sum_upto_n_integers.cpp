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
	
	int sum = 0;
	for (int i = 0; i<=n; i++) {
		sum += i;
	}
	printf("Sum upto %d integers is %d.", n, sum);
}
