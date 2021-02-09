#include <iostream>
#include <string>
using namespace std;
const int SIZE = 10;
void vvod(int M[], int SIZE);
void vych(int M[], int SIZE, float sr);
int table(int M[], int SIZE, int i);
int main()
{
	setlocale(LC_ALL, "Russian");
	int M[SIZE];
	float sum = 0;
	vvod(M, SIZE);
	vych(M, SIZE, sum);
	for (int i = 0; i < SIZE; i++)
	{
		table(M, SIZE, i);
		cout << M[i]<<' ';
	}
	return 0;
}
void vvod(int M[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin >> M[i];
	}
	cout << "¬вод выполнен" << endl;
}
void vych(int M[], int SIZE, float sum)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		sum += M[i];
	}
	sum = sum / i;
	cout << "—реднее значение: " << sum<< endl;

}
int table(int M[], int SIZE, int i)
{
return M[i];
}