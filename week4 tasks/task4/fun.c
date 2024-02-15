int sum(int arr[]){
	int ans=0;
for (int i=0;i<10;i++) {
	if(arr[i]%2==0){
		ans+=arr[i];
	}
}
return ans;
}

int prod(int arr[]){
	int ans=1;
for (int i=0;i<10;i++) {
		if(arr[i]%2==1){
		ans*=arr[i];
	}
}
return ans;
}