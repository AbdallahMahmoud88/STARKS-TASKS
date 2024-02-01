char is_prime(int n) {
	
	if(n == 1 || n == 0)
		return 0;
	
	for(int i = 2; i < n; i++) {
		if(!(n % i)) 
			return 0;
	}
	
	return 1;
}