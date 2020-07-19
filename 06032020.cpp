#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{

}

/*SetConsoleOutputCP(1251);
	const int sizer = 100, sizec = 100;
	int r, c;
	int arr[sizer][sizec]{ 0 };
	cout << "Введите количество рядов(r): ";
	cin >> r;
	cout << "Введите количество столбцов(c): ";
	cin >> c;
	cout << endl;
	if (r<1 or r>sizer) return 0;
	if (c<1 or c>sizer) return 0;
	int k = 1;
	int ir = 0;
	//матрица 5 на 5
	do
	{
		for (int j = ir; j < c - ir; j++)//вправо
			arr[ir][j] = k++;
		if (k > r * c)break;
		for (int j = 1 + ir; j < r - 1 - ir; j++)//вниз
			arr[j][c - 1 - ir] = k++;
		for (int j = c - 1 - ir; j >= ir; j--)//влево
			arr[r - 1 - ir][j] = k++;
		for (int j = r - 2 - ir; j >= 1 + ir; j--)//вверх
			arr[j][ir] = k++;
		ir++;
	} while (k <= r * c);
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	return 0;*/

	/*SetConsoleOutputCP(1251);
		const int sizer = 100, sizec = 100;
		int r, c;
		int arr[sizer][sizec]{ 0 };
		cout << "Введите количество рядов(r): ";
		cin >> r;
		cout << "Введите количество столбцов(c): ";
		cin >> c;
		if (r<1 or r>sizer) return 0;
		if (c<1 or c>sizer) return 0;
		int k = 0;
		for (int col = 0; col < c; col++) //алгоритм масива змейкой вар 2
			if (col % 2 == 0)
				for (int j = 0; j < r; j++)
					arr[j][col] = ++k;
			else
				for (int j = r - 1; j >= 0; j--)
					arr[j][col] = ++k;
		for (int j = 0; j < r; j++) // вывод масива на экран
		{
			for (int i = 0; i < c; i++)
				cout << arr[j][i] << '\t';
			cout << endl;
		}
		return 0;*/

		/*SetConsoleOutputCP(1251);
			const int sizer = 100, sizec = 100;
			int r, c;
			int arr[sizer][sizec]{ 0 };
			cout << "Введите количество рядов(r): ";
			cin >> r;
			cout << "Введите количество ячеек рядa(c): ";
			cin >> c;
			if (r<1 or r>sizer) return 0;
			if (c<1 or c>sizer) return 0;
			int k = 0;
			for (int row = 0; row < r; row++) //алгоритм масива змейкой
				if (row % 2 == 0)
					for (int j = 0; j < c; j++)
						arr[row][j] = ++k;
				else
					for (int j = c - 1; j >= 0; j--)
						arr[row][j] = ++k;
			for (int j = 0; j < r; j++) // вывод масива на экран
			{
				for (int i = 0; i < c; i++)
					cout << arr[j][i] << '\t';
				cout << endl;
			}
			return 0;*/