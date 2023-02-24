int linearSearch(int key, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
            return (i);
        
    }

    return (-1);
}