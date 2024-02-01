char is_perfect(int n) {
	int sum = 0;
	for(int i = 1; i < n; i++) {
		if(!(n % i)) sum += i;
		if(sum > n) return 0;
	}
	if(sum == n) return 1;
	return 0;
}