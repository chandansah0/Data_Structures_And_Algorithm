// WAP in C to Insert an element at a specific position in an Array


#include <stdio.h>

int main()
{
	int arr[15] = { 0 };
	int i, x, pos, n = 5;
	for (i = 0; i < n; i++)
		arr[i] = i + 1;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	// element to be inserted
	x = 111;
	pos = 5;
	n++;
	// shift elements forward
	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];
	arr[pos - 1] = x;
	// new array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}