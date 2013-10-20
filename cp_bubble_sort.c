#include <stdio.h>

int main(void)
{
    int arr[5] = {3,2,5,1,4};
    int index;
    int i, j;
    int temp;

    printf("sizeof(arr) = %d\n", sizeof(arr)/sizeof(int));

    for(i=0; i<sizeof(arr)/sizeof(int)-1 ; i++)
    {
        for(j=0 ; j<sizeof(arr)/sizeof(int)-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0 ; i<5 ; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
