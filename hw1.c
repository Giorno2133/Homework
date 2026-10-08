#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int tmp = 0;
	printf("Input a\n");
	scanf("%d", &a);
	printf("input b\n");
	scanf("%d", &b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a =%d\nb =%d\n", a, b);

}
