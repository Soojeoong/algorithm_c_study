//[ 문제 5 ] 원반의 개수 N을 입력받아, 하노이 탑 문제의 수행과정을 예시와 같이 출력하는 프로그램을 작성하시오.
void Hanoi(int N, char from, char tmp, char to) {
	if (N == 1)
		printf("%c %c\n", from, to); //from -> to
	else {
		Hanoi(N - 1, from, to, tmp); //from의 맨 밑 빼고 나머지 -> tmp
		printf("%c %c\n", from, to); //from의 한 개 -> to
		Hanoi(N - 1, tmp, from, to); //tmp 전부 -> to
	}
}


int main() {
	int N;
	scanf("%d", &N);
	Hanoi(N, 'A', 'B', 'C');

	return 0;
}

