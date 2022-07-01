//[ 문제 3 ] 양의 정수를 입력 받아, 각 자리의 수를 낮은 자릿수부터 차례로 출력하는 프로그램을 작성하시오. (나머지 조건은 문제2와 동일)
void digit_back(int n) {
	if (n < 10) //base case
		printf("%d\n", n);
	else { //recursion
		printf("%d\n", n % 10);
		digit_back(n / 10);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	digit_back(n);
	return 0;
}

