#include <iostream>

int binary_search_rec(int arr[], int key, int l, int r)
{
	if (l == r)
		return -1;
	int m = (r + l) / 2;
	if (arr[m] == key)
		return (m);
	if (key > arr[m])
		return (binary_search_rec(arr, key, m + 1, r));
	else
		return (binary_search_rec(arr, key, l, m));
}

int binary_search(int *arr, int r, int key)
{
	int l, m;

	if (!arr && r <= 0 || key < arr[0] || key > arr[r - 1])
		return -1;
	l = 0;
	while (l < r)
	{
		m = (r + l) / 2;
		if (arr[m] == key)
			return (m);
		if (key > arr[m])
			l = m + 1;
		else
			r = m;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 9, 11, 34, 676, 788, 999};

	for (int i = 0; i < 1000000000; i++)
		binary_search(arr, 9, 999);
	return 0;
}
