int binarySearchRec(int key, int array[], int size, int left, int right)
{   

    while (left <= right)
    {
        int mid = left + ((right - left)/2);
        if (key == array[mid])
            return (mid);
        
        else if (key > array[mid])
        {
            left = mid +1;
            return (binarySearchRec(key, array, size, left, right));
        }        
        else
        {
            right = mid -1;
            return (binarySearchRec(key, array, size, left, right));
        }
    }

    return (-1);
}

int binarySearchIter(int key, int arr[], int size, int left, int right)
{
    int mid;
    
    while (left <= right)
    {
        mid = left + ((right - left)/2);
        if (key == arr[mid])
            return (mid);
        else if (key > arr[mid])
        {
            left = mid +1;
        }
        else
            right = mid -1;
    }
    

    return (-1);
}
