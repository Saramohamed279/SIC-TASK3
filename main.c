#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int index)
{
    int sum = 0;
    for(int i = 0; i < index; i++)
    {
        sum += arr[i];
    }
  return sum;
}


int main()
{
    int arr[20], num,index = 0;
    int kolo_tmm;
    printf("Enter Your Array Numbers: ");
    for(int i = 0; i < 20; i++)
    {
        kolo_tmm = 1;
        scanf("%d",&num);
        for(int j = 0; j < i; j++)
        {
            if(arr[j] == num)
            {
                kolo_tmm = 0;
            }
        }
        if(kolo_tmm)
        {
            arr[index] = num;
            index++;
        }
    }

    printf("\n The array Elements is : ");

    for(int h = 0; h < index; h++)
    {
        printf("   %d ",arr[h]);
    }

    int sum_nums = sum(arr, index);
    printf("\n The sum of the array is %d", sum_nums);

    return 0;
}

