#include <iostream>

using namespace std;

// This function performs a binary search on a sorted array of integers.
// It takes in the array 'a', the length of the array 'n', and the integer 'x' to search for.
// It returns the index of 'x' in the array if it is found, or -1 if it is not found.
int binarySearch(int a[], int n, int x)
{
	// Initialize the left index to 0 and the right index to the last index of the array.
	int left = 0;
	int right = n - 1;

	// Continue the loop as long as the left index is less than or equal to the right index.
	while (left <= right)
	{
		// Calculate the middle index as the average of the left and right indices.
		int mid = (right + left) / 2;

		// Check if the middle element of the array is equal to the target value 'x'.
		if (a[mid] == x)
		{
			// If the middle element is equal to 'x', return the middle index.
			return mid;
		}
		// If the middle element is greater than 'x', update the right index to be one less than the middle index.
		else if (a[mid] > x)
		{
			right = mid - 1;
		}
		// If the middle element is less than 'x', update the left index to be one more than the middle index.
		else
		{
			left = mid + 1;
		}
	}
	// If the loop completes without finding 'x', return -1 to indicate that 'x' was not found in the array.
	return -1;
}

int main()
{
	cout << "BINARY SEARCH!!!!!" << endl;
	int a[] = {2, 9, 14, 25, 36};
	int n = sizeof(a) / sizeof(a[0]);
	cout << binarySearch(a, n, 14) << endl;
	return 1;
}