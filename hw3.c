#include <stdio.h>

int main() {
	int a = 0;
	printf("Enter your number, snowflake\n");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
		
}
