//[ 문제 4 ] N 개의 정수를 입력 받아 (N ≤ 20), 최댓값을 구하는 프로그램을 작성하시오.
int max_N(int *num, int N) {
	if (N == 1) //base case
		return *num; //첫번째 원소
	else { //recursion
		if ((*num + N - 1) > max_N(num, N - 1))
			return *(num + N - 1);
		else
			return max_N(num, N - 1);
	}
}

int main() {
	int N, i, num[20];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	printf("%d", max_N(num, N));
	return 0;
}
