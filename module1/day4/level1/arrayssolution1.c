/*Sum & Average of 1D Array*/
#include <stdio.h>
int sumarr(int arr[], int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
    sum=sum+arr[i];
    }
    return sum;
}
float avgarr(int arr[] ,int size)
{
    int sum = sumarr(arr ,size);
    return (float)sum/size ;
}
int main()
{
    int arr[5];
    for (int i=0;i<5;i++)
    {
        printf("enter the %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    float sum=sumarr(arr ,5);
    float average=avgarr(arr ,5);
    printf("the sum of array =%.2f\n",sum);
    printf("the average of array=%.2f\n",average);
    
    return 0;
}