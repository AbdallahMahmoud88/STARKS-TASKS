unsigned long long int Fibonacci(int num){
	if(num==1)
		return 0;

	int before =0,present=1;	
		for(int i=2;i<num;i++){

			unsigned long long int temp=present;
			present+=before;
			before=temp;
		}

	return present;
}