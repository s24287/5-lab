#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Podaj rozmiar tablicy: ";
	cin >> n;

	int* tablica = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Podaj wartosc dla tablicy [" << i << "]: ";
		cin >> tablica[i];
	}

	for (int i = 0; i < n / 2; i++)
	{
		int X =  n;
		int Y =  n--;

		int tmp = tablica[X];
		tablica[X] = tablica[Y];
		tablica[Y] = tmp;
	}
}