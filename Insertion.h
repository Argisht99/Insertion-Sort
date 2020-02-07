#pragma once
#include <iostream>


void insertion(int arr[], int n)

{
	int i, key, j;
	for (i = 1; i < n; ++i)
	{
		key = arr[i];
		j = i - 1;
		while (arr[j] >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		{
			arr[j + 1] = key;
		}

	}
	for (i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}
}
