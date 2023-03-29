#include <iostream>


int main(void)
{


	return (0);
}

int merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int arrl[n1];
	int arrr[n2];

	for (i = 0; i < n1; i++)
	{
		arrl[i] = arr[l + i];
	}

	for (j = 0; j < n2; j++)
	{
		arrl[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;

	while (i < n1 && j < n2)
	{
		if (arrl[i] > arrr[j])
		{
			arr[k] = arrr[j];
			j++;
		}
		else
		{
			arr[k] = arrl[i];
			i++;
		}
		k++;
	}
	
	while (i < n1)
	{
		arr[k] = 
	}
	


}
