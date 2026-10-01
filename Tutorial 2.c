/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key)
{
    if(low > high)
        return -1;
    int mid = (low + high) / 2;
    if(arr[mid] == key)
        return mid;
    if(key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    return binarySearch(arr, mid + 1, high, key);
}
int main()
{
    int arr[100], n, key, i, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, 0, n - 1, key);
    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index - %d", result);

    return 0;
}

