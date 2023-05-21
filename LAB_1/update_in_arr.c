// WAP in C to update an element at any specified position of an array

#include <stdio.h>
 
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
void update(int arr[], int index, int element)
{
    arr[index] = element;
}
 
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 0;
    display(arr, size);
    update(arr, index, element);
    display(arr, size);
    return 0;
}