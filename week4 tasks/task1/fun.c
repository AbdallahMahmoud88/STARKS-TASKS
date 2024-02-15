int dub(int num){
	char dup[10]={0};
	for(int i=0;num;i++){
		if (dup[num%10])
			return 1;
		dup[num%10]+=1;
		num/=10;
	}
	return 0;
}
