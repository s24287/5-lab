#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Podaj rozmiar wektora: ";
	cin >> n;

	vector<int> ns(n);
	for (int i = 0; i < n; ++i)
	{
		cout << "Podaj wartosc dla ns[" << i << "]: ";
		cin >> ns[i];
	}

	int max = 0;
	int index = 0;
	int i = 0;
	for (const auto& v : ns)
	{
		if (v > max) {
			max = v;
			index = i;
		}
		i++;
	}

	cout << "najwiekszy element wektora to " << max << " o indeksie rownym " << index << endl;
}