/* Min & Max of 1D Array*/
#include<stdio.h>
int minval(int arr[],int size)
{
    int min=arr[0];
   for(int i=1;i<size;i++)
   {
       if(arr[i] < min)
       {
           min=arr[i];
       }
   }
   return min;
}

int maxval(int arr[],int size)
{
    int max=arr[0];
   for(int i=1;i<size;i++)
   {
       if(arr[i] > max)
       {
           max=arr[i];
       }
       
   }
   return max;
}
int main()
{
    int arr[5];
    for (int i=0;i<5;i++)
    {
        printf("enter the %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    
    float min = minval(arr , 5);
    float max = maxval(arr , 5);
    printf("minimum value %.2f\n",min);
    printf("maximum value %.2f\n",max);
    
    return 0;
}