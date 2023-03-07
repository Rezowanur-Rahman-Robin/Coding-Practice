void maxMin(int arr[], int size) {
  // Write your code here
  	int * result = new int[size];

	int pointerSmall = 0,     //PointerSmall => Start of arr
	pointerLarge = size - 1;   //PointerLarge => End of arr

	//Flag which will help in switching between two pointers
	bool switchPointer = true;

	for (int i = 0; i < size; i++) {
		if (switchPointer)
      result[i] = arr[pointerLarge--]; // copy large values
		else
      result[i] = arr[pointerSmall++]; // copy small values

		switchPointer = !switchPointer;   // switching between samll and large
	}

	for (int j = 0; j < size; j++) {
		arr[j] = result[j];    // copying to original array
	}
  delete [] result;
}
