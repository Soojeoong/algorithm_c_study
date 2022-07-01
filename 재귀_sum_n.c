//[문제 1] 양의 정수 N을 입력 받아, 1부터 N까지의 합을 구하는 프로그램을 작성하시오.
int sum_n(int n) {
	if (n <= 1)
		return 1;
	return n + sum_n(n - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum_n(n));

	return 0;
}



