// WAP in C to merge two arrays

#include <stdio.h>
 
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
int main()
{
    int i,j;
    int arr1[100] = {7, 8, 12, 27, 88};
    int arr2[100] = {7, 8, 12};
    int ans[100];
    int size1 = 5, size2 = 3;
    int newsize = size1 + size2;
    display(arr1, size1);
    display(arr2, size2);
    for (int i = 0; i < size1; i++)
    {
        ans[i] = arr1[i];
    }
    j = size1;
    for (int i = 0; i < size2; i++)
    {
        ans[j] = arr2[i];
        j++;
    }
    display(ans, newsize);
    return 0;
}