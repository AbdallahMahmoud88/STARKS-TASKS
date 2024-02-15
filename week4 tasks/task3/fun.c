int *max_arr(int arr[],int size_arr){
	static int max_num[2]={0};
	max_num[0]=arr[0];
	for(int i=1;i<size_arr;i++){
		if(max_num[0]<arr[i]){
			max_num[0]=arr[i];
			max_num[1]=i;
		}
	}
	return max_num;
}


int *min_arr(int arr[],int size_arr){
		static int min_num[2]={0};
	min_num[0]=arr[0];
		for(int i=1;i<size_arr;i++){
		if(min_num[0]>arr[i]){
			min_num[0]=arr[i];
			min_num[1]=i;
		}
	}
	return min_num;
}