// C++ program for Merge Sort
#include <iostream>
using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right)
{
	 int  x1 = mid - left + 1;
	int  x2 = right - mid;

	// Create temp arrays
	int *leftArray = new int[x1],
		*rightArray = new int[x2];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i <x1; i++)
		leftArray[i] = array[left + i];
	for (int j = 0; j < x2; j++)
		rightArray[j] = array[mid + 1 + j];

	int i = 0, // Initial index of first sub-array
		j = 0; // Initial index of second sub-array
	int k = left; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (i < x1 && j < x2) {
		if (leftArray[i] <= rightArray[j]) {
			array[k] = leftArray[i];
			i++;
		}
		else {
			array[k] = rightArray[j];
		j++;
		}
		k++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (i < x1) {
		array[k] = leftArray[i];
		i++;
		k++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (j < x2) {
		array[k] = rightArray[j];
		j++;
		k++;
	}
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const left, int const right)
{
	if (left >= right)
		return; // Returns recursively

	int mid = left + (right - left) / 2;
	mergeSort(array, left, mid);
	mergeSort(array, mid + 1, right);
	merge(array, left, mid, right);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// UTILITY FUNCTIONS
// Function to print an array
/*void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}     */

// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes
