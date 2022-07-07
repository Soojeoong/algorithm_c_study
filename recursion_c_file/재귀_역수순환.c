//1 + 1/2 + 1/3 + ... + 1/n

double sum(int n) {
	if (n == 1)
		return 1;
	else
		return (1.0 / n) + sum(n - 1);
}

int main() {
	int n;
	printf("%lf", sum(5));
	return 0;
}