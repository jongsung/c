#include <stdio.h>
#include <stdlib.h>

int binarySearch(int ar[], int len, int target)
{
    int first = 0;
    int mid = 0;
    int last = len -1;

    while(first <= last)
    {
        mid = (first+last) / 2;

        if(target == ar[mid]){
            return mid;
        }
        else
        {
            if(target < ar[mid])
            {
                last = mid -1;
            }
            else
            {
                first = mid +1;
            }
        }
    }
    
    return -1;
}


int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = binarySearch(arr, sizeof(arr)/sizeof(int), 7);
    if(idx == -1)
    {
        printf("search failed\n");
    }
    else
    {
        printf("result = %d\n", idx);
    }


}
