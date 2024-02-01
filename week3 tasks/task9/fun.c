extern int occurs;

float average(float num1, float num2) {
	occurs++;
	return (num1 + num2) / 2.0f;
}