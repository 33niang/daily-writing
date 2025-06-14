// 递归求斐波那契数列,但是时间复杂度为o(n)

int fibonacci(int first, int second, int n) {
	if (n <= 0)
		return 0;
	if (n < 3)
		return 1;
	else if (n == 3)
		return first + second;
	else
		return fibonacci(second, first + second, n - 1);
}
