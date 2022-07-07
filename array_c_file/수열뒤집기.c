//1. 배열 구간 뒤집기

//뒤집기 함수
void Flip_over(int* x, int start, int end);

int main() {
	int N, x[100];//수열의 길이, 수열x
	int flip_num, start = 0, end = 0; //뒤집기 개수, 뒤집기 구간 시작, 끝
	int i;

	scanf("%d", &N); //수열의 길이 N
	for (i = 0; i < N; i++) {
		scanf("%d", &x[i]); //수열 x
	}

	scanf("%d", &flip_num); //뒤집기 정보의 개수
	for (i = 0; i < flip_num; i++) {
		scanf("%d %d", &start, &end); //뒤집기 구간 정보(시작,끝)
		Flip_over(x, start, end); //뒤집기
	}
	
	for (i = 0; i < N; i++) {
		printf("%d ", x[i]); //최종 수열 출력
	}

	return 0;
}

//뒤집기 함수
void Flip_over(int* x, int start, int end) {
	int i, tmp;
	for (i = 0; i < (end - start)/2 + 1; i++) {
		tmp = x[start + i];
		x[start + i] = x[end - i];
		x[end - i] = tmp;
	}
}
