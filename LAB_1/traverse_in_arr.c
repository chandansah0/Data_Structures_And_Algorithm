// WAP in C to traverse an array

#include <stdio.h>
 
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
 
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    display(arr, size);
    traverse(arr, size);
    return 0;
}