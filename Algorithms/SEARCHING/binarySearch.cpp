int binarySearch(int key, int array[], int size, int left, int right)
{   

    while (left <= right)
    {
        int mid = left + ((right - left)/2);
        if (key == array[mid])
            return (mid);
        
        else if (key > array[mid])
        {
            left = mid +1;
            return (binarySearch(key, array, size, left, right));
        }        
        else
        {
            right = mid -1;
            return (binarySearch(key, array, size, left, right));
        }
    }

    return (-1);
}