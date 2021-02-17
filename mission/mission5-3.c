#include <stdio.h>


void sort(int count,int arr[]);
int main()
{
    int n = 7; 
    int arr[7] = { 0, 25, 10, 17, 6, 12, 9 };  
    sort(n, arr); 

    return 0; 
}
    
 void sort(int count,int arr[])   
{
    int temp;

    for (int i = 0; i < count; i++)  
    {
        for (int j = 0; j < count - 1; j++)  
        {
            if (arr[j] > arr[j + 1])       
            {                                 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;         
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);   
    }

    printf("\n");
}
    

    


