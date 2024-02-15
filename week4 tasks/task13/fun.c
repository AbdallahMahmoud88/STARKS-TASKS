int max(int arr[]){
	for(int i=0; i<10; i++) {
        for(int j=0; j<9; j++) {
            if(arr[j]>arr[j+1]) {
                int value =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=value;
            }
        }
    }
	return arr[9];
}
int min(int arr[]){
		for(int i=0; i<10; i++) {
        for(int j=0; j<9; j++) {
            if(arr[j]>arr[j+1]) {
                int value =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=value;
            }
        }
    }
	return arr[0];
}

int num_passed(int arr[]){
	int count_passed=0;
	for (int i=0;i<10;i++){
		if(arr[i]>=50)
			count_passed++;
	}
	return count_passed;
}
int num_failed(int arr[]){
	int count_failed=0;
	for (int i=0;i<10;i++){
		if(arr[i]<50)
			count_failed++;
	}
	return count_failed;
}
int sum(int arr[]){
	
		int sum_grades=0;
	for (int i=0;i<10;i++){
			sum_grades+=arr[i];
	}
	return sum_grades;
}