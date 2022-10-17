#include <stdio.h>
#define TC 1

int fs_countInversions(int arr[], int n);
int main()
{
    #if TC == 1
    int arr[] = {3,2,1};
    #elif TC == 2
    int arr[] = {4,6,2,9};
    #elif TC == 3
    int arr[] = {82,12,38,10,15,54,51,71,95,12,1,21,90,10,89,97,42,1,84,92};
    #elif TC == 4
    int arr[] = {43,99,75,84,32,81,90,7,47,12,6,84,35,39,34,30,40,24,14,54};
    #elif TC == 5
	int arr[] = {18,63,85,71,40,12,62,65,7,96,94,27,87,56,73,1,6,26,41,19};
    #endif
	int n = sizeof(arr) / sizeof(arr[0]);
	printf(" countInversions(arr) = %d \n", fs_countInversions(arr, n));
	return 0;
}
int fs_countInversions(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                count++;
    return count;
}