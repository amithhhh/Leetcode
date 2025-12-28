#include <stdio.h>

int rev(int);

int main() {
	int num;
	printf("Enter the num: ");
	scanf("%d", &num);
	int reversed = rev(num);
	printf("%d\n", reversed);
	return 0;
}

int rev(int x) {
    int rem, rev = 0;
    while (x != 0) {
        rem = x % 10;
        rev = rem + rev * 10;
        x /= 10;
    }
    return rev;
}
