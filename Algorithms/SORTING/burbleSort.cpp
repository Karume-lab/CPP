int burbleSort(int size, int arr[])
{
    for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    arr[i] = arr[i] + arr[j];
                    arr[j] = arr[i] - arr[j];
                    arr[i] = arr[i] - arr[j];
                    
                    // temp = arr[i];
                    // arr[i] = arr[j];
                    // arr[j] = temp;
                }
            }
            
        }

    return (*arr);
}
