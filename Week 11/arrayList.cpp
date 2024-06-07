#include <iostream>
#include <ctime>
using namespace std;

void sort(int list_array[], int list_size);
int binary_search_algo(int list_array[], int lowest, int upper, int se);
void search(int list_array[], int list_size, int se);
int sequential_search_algo(int list_array[], int list_size, int se);

int main()
{
	int se;
	const int list_size = 1000;
	int list_array[list_size];
	srand((unsigned) time(0));
	for (int i = 0; i < list_size; i++)
	{
		list_array[i] = (rand() % 100) + 1;

	}
	sort(list_array, list_size);
	cout << "\nEnter the element to search : ";
	cin >> se;
	search(list_array, list_size, se);
	system("pause");
	return 0;
}

void sort(int list_array[], int list_size)
{
	bool isSorted = false;
	for (int iteration = 1;
		(iteration < list_size) &&
		!isSorted;
		iteration++)
	{

		isSorted = true;
		for (int index = 0; index < list_size - iteration;
			index++)
		{
			if (list_array[index] > list_array[index + 1])
			{
				int temp = list_array[index];
				list_array[index] = list_array[index + 1];
				list_array[index + 1] = temp;
				isSorted = false;

			}
		}
	}
	for (int i = 0; i < list_size; i++)
	{
		cout << i << " " << list_array[i] << endl;
	}
}

int comparisons = 0;

int binary_search_algo(int list_array[], int lowest, int upper, int se)
{

	int middle = (lowest + upper) / 2;
	if (upper >= lowest)
	{
		++comparisons;
		if (list_array[middle] == se)
		{
			return middle;
		}
		else if (list_array[middle] > se)
		{
			return binary_search_algo
			(list_array, lowest, middle - 1, se);
		}
		else
		{
			return binary_search_algo
			(list_array, middle + 1, upper, se);
		}
	}
	return -1;
}

int sequential_search_algo(int list_array[], int list_size, int se)
{
	int seq_comparison = 0;
	for (int i = 0; i < list_size; i++)
	{
		seq_comparison++;
		if (list_array[i] == se)
		{
			cout << "Comparisons of sequential search : "

				<<
				seq_comparison << endl;
			return i;
		}
	}
	return -1;

}

void search(int list_array[], int list_size, int se)
{
	int found = -1;
	if (list_size >= 14)
	{
		found = binary_search_algo
		(list_array, 0, list_size - 1, se);
		if (found == -1)
		{
			cout << "\nelement not found";
		}
		else
		{
			cout << "\nElement found at " << found
				<<
				" index";
			cout << "\nComparisons of binary search : "
				<<
				comparisons << endl;
		}
	}
	else
	{
		found = sequential_search_algo

		(list_array, list_size, se);
		if (found == -1)
		{
			cout << "\nelement not found";
		}
		else
		{
			cout << "\nElement found at " << found

				<<
				" index";
		}
	}
}