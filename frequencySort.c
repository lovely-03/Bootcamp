#include<stdio.h>
void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        freq[i] = 1;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                freq[i] = 0;
                break;
            }
        }
        if(freq[i] != 0) 
        {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    freq[i]++;
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(freq[i] < freq[j] || (freq[i] == freq[j] && arr[i] > arr[j])) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;
            }
        }
    }
    printf("Frequency sorted array: ");
    for(int i = 0; i < n; i++) {
        if(freq[i] > 0) 
        {
            for(int j = 0; j < freq[i]; j++) 
            {
                printf("%d ", arr[i]);
            }
        }
    }
}