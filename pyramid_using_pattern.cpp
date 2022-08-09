#include<stdio.h>
#include<conio.h>

void func(int);

int main() {
	
	int n;
	
	printf("Enter the number of rows:  ");
	scanf("%d", &n);
	func(n);
	
}

void func(int n) {

	
	int i,j;
	
	for(i=1; i<=n; ++i) {
		for(j=1; j<=i; ++j) {
			printf("%d", j);
		}
		printf("\n");
	}

}
