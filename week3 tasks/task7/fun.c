int quality(int marks){
	if(marks >= 90&&marks<=100)
		return 4;
	else if(marks>=80&&marks<=89)
		return 3;
	else if(marks>=70&&marks<=79)
		return 2;
	else if(marks>=60&&marks<=69)
		return 1;
	else
	return 0;
}