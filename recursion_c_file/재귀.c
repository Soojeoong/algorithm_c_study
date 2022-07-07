//팩토리얼 재귀
int factorial(int n) {
	if (n <= 1)
		return 1;
	else
		return (n * factorial(n - 1));
	
}
//팩토리얼 반복
int factorial_iter(int n){
	int i, result = 1;
	for (i=1; i<=n; i++){
		result = result * i;
	}
	return(result);
}
//-------------------------------------------
//sub(10) = 1+4+7+10
int sub(int n){
	if (n < 0) 
		return 0;
	return n + sub(n - 3);
} 
//-------------------------------------------
//거듭제곱 계산 (x^n)
//거듭제곱 반복 --> O(n)
double slow_power(double x, int n){
	int i;
	double result = 1.0;

	for (i=0; i<n; i++){
		result = result * x;
	}
	return(result);
}

//거듭제곱 재귀 -> O(log2의 n)
double power(double x, int n){
	if (n==0)
		return 1;
	else if ((n%2) == 0) //짝수
		return power(x*x, n/2);
	else  //홀수
		return x*power(x*x, (n-1)/2);
}

//-------------------------------------------
//피보나치 수열 재귀 --> O(2^n)
int fib(int n){
	if (n==0) 
		return 0;
	if (n==1) 
		return 1;
	return (fib(n-1) + fib(n-2));
}

//피보나치 수열 반복  --> 더 효과적
int fib_iter(int n){
	if (n==0)
		return 0;
	if (n==1)
		return 1;

	int pp =0;
	int p =1;
	int result = 0;

	for (int i = 2; i<=n; i++){
		result = p + pp;
		pp = p;
		p = result;
	}
	return result;
}

//-------------------------------------------
//하노이탑 문제
//한 번에 하나의 원판만 이동할 수 있다.
//맨 위에 있는 원판만 이동할 수 있다.
//크기가 작은 원판위에 큰 원판이 쌓일 수 없다.
//중간의 막대를 임시적으로 이용할 수 있으나 앞의 조건들을 지켜야 한다.

//막대 from에 쌓여있는 n개의 원판을 막대 tmp를 사용하여 막대 to로 옮긴다.
void hanoi_tower(int n, char from, char tmp, char to){
	if (n==1){
		printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to); //from에 있는 한 개의 원판 -> to
	}
	else{
		hanoi_tower(n-1, from, to , tmp); //from의 맨 밑의 원판을 제외한 나머지 원판들 -> tmp
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to); //from에 있는 한 개의 원판 -> to 
		hanoi_tower(n-1, tmp, from, to); //tmp의 원판들 -> to
	}
}