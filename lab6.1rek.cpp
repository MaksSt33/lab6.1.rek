#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* p, const int size, const int Low, const int High, int i)
{
	p[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(p, size, Low, High, i + 1);
}
void Print(int* p, const int size, int i)
{
	cout << setw(4) << p[i];
	if (i < size - 1)
		Print(p, size, i + 1);
	else
		cout << endl;
}
int Sum(int* p, const int size, int i)
{
	if (i < size)
	{
		if (p[i] < 0 && p[i] % 2 == 0)
			return p[i] + Sum(p, size, i + 1);
		else
			return Sum(p, size, i + 1);
	}
	else
		return 0;
	}
int Num(int* p, const int size, int i)
{
	if (i < size)
	{
		if (p[i] < 0 && p[i] % 2 == 0)
			return   1 + Num(p, size, i + 1);
		else
			return Num(p, size, i + 1);
	}
	else
		return 0;
}
void Replace(int* p, const int size, int i)
{
	if (i < size)
	{
		if (p[i] < 0 && p[i] % 2 == 0)
			p[i] = 0;

			return Replace(p,size,i + 1) ;
	}
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 20;
	int p[n];
	int Low = -20;
	int High = 34;
	Create(p, n, Low, High, 0);
	Print(p, n, 0);
	cout << "S = " << Sum(p, n, 0) << endl;
	cout << "Num = " << Num(p, n, 0) << endl;
	Replace(p, n, 0);
	cout << "Modified mass = " << endl;
	Print(p, n, 0);
	return 0;
}