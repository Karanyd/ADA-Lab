#include<stdio.h>
#include<math.h>
void insertionSort(int arr[],int n)
{
    int i, key, j;
    for(i=1; i<n; i++) {
        key = arr[i];
        j = i-1;
         while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
         }
         arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 int main()
{
    int n;
    printf("ENTER SIZE OF = ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY ELEMENTS = ");
    for (int j = 0; j < n; j++)
        {
            arr[j] = (rand() % 1000) + 1;
            printf("%4d", arr[j]);
        }
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
