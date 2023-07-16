#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int searchValue;
    printf("\nEnter the value to search in the array: ");
    scanf("%d", &searchValue);

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchValue)
        {
            printf("Element %d found at index %d.\n", searchValue, i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element %d not found in the array.\n", searchValue);

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
