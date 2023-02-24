#include <iostream>

using namespace std;

int linearSearch(int key, int array[], int size);
int main(void)
{
    int arr[] = {2,3,4,5,7,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 1;

    cout<<linearSearch(key, arr, size)<<endl;

    return (0);
}


int linearSearch(int key, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
            return (i);
        
    }

    return (-1);
}