#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void bubble_sort(int array[], int);
void main()
{
	int arr[10], n;
	printf("How many elements : ");
	scanf("%d", &n);
	printf("enter elements : ");
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	bubble_sort(arr, n);
	printf("Sorted Array is  : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	_getch();
}
void bubble_sort(int a[], int n)
{
	for (int i = 0; i<n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
}