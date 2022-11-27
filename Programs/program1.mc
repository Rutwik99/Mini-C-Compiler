function int main() {
	int N;
	int k;
	int i;
	scanf(N,k);
	int sum;
	sum = 0;
	for(i = 1;i <= N;i += 1) {
		sum += (i^k);
	}
	printf(sum);
	return 0;
}