#include <stdio.h>
void PrintArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}
void InsertionSort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{
    int a[100];
    int n;
    printf("---!!! Insertion Sort !!!---\n\n");
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("\nEnter the Array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("UnSorted Array\n");
    PrintArray(a, n);
    InsertionSort(a, n);
    printf("\n\n");
    printf("Sorted Array\n");
    PrintArray(a, n);
    return 0;
}