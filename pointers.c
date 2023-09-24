#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 20;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = arr;

    int count_odd = 0;
    int count_even = 0;

    for (int i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
        {
            count_even++;
        }
        if (*ptr % 2 != 0)
        {
            count_odd++;
        }
        
        ptr++;
    }
    printf("\nThe number of even elements in the array is: %d", count_even);
    printf("\nThe number of odd elements in the array is: %d", count_odd);
}