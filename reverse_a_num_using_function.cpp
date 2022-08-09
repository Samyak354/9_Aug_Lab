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
	
	int n1 = n, rev=0, rem;
	
	while (n!=0) {
		rem = n % 10;
		rev = rev*10 + rem;
		n /= 10;	
	}
	printf("The reverse of %d is %d.", n1, rev);
}
