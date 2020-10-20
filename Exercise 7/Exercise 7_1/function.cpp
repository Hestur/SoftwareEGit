int maxValue(int* arrPtr, const int SIZE) {
	int i;

	int max = arrPtr[0];

	for (i = 0; i < SIZE; i++)
		if (arrPtr[i] > max)
			max = arrPtr[i];

	return max;
}

int minValue(int* arrPtr, const int SIZE) {
	int i;

	int min = arrPtr[0];

	for (i = 0; i < SIZE; i++)
		if (arrPtr[i] < min)
			min = arrPtr[i];

	return min;
}
double avgValue(int array[], const int SIZE) {
	size_t i;
	double sum = 0;
	double avg = 0.0;
	/* calculate the sum of grades using for loop*/
	for (i = 0; i < SIZE; i++) {
		sum = sum + array[i];
	}
	avg = sum / SIZE;

	return avg;
}