//[ 문제 2 ] 양의 정수를 입력 받아, 각 자리의 수를 높은 자릿수부터 차례로 출력하는 프로그램을 작성하시오.
void digit_front(int n) {
	if (n < 10) //base case
		printf("%d\n", n);
	else { //recursion
		digit_front(n / 10);
		printf("%d\n", n % 10);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	digit_front(n);
	return 0;
}
