#include <iostream>
#include <cstdlib>
using namespace std;

void doublex(double* x)
{
	*x = (rand() % 10 + 1) / 10.0;
}

void RandomArr(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << "\t";
	}
}

int main()
{
	srand(time(0));
	double* x = new double();
	doublex(x);
	cout << *x << "\n\n";
	int* arr = new int[10];
	RandomArr(arr, 10);
}
