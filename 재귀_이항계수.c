//이항계수(binomial coefficient)
//nCk = (n-1)C(k-1) + (n-1)Ck (if  0 < k < n)
//		1					  (if k = 0 or k = n)
int coef(int n, int k) {
	if (k == 0 || k == n) {
		return 1;
	}
	else {
		return coef(n - 1, k - 1) + coef(n - 1, k);
	}
}

int main() {
	printf("%d", coef(10, 6));
	return 0;
}