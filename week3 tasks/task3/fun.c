int bin(int x){
	int remind=0,binary_num=0,i=1;
	while(x!=0){
		remind=x%2;
		x/=2;
		binary_num += remind*i;
		i*=10;
		
	}
return binary_num;	
}