#include<stdio.h>

// o(logn)时间复杂度实现求x的n次方

int x_to_power_of_n(int x, int n) {
	if (n == 0)
		return 1;
	int t = x_to_power_of_n(x, n / 2);
	if (n % 2 == 1)
		return t * t * x;
	return t * t;
}

int main() {
	
	printf("%d\n", x_to_power_of_n(3, 3));

	int p = 1;
	printf("%d\n", sizeof(&p));
	return 0;
}
