#include <iostream>
using namespace std;

int row_major(int rpos, int cpos, int column)
{
	cout << "Row Major Address is :: " << endl;
	int matrix[10][10];
	int base_address = int(&matrix);

	int ele_size = 2;
	int add = base_address + ele_size * (rpos * column + cpos);
	return add;
}
int column_major(int rpos, int cpos, int row)
{
	cout << endl
		 << " Column Major Address is :: " << endl;
	int matrix[10][10];
	int base_address = int(&matrix);

	int ele_size = 2;
	int add = base_address + ele_size * (cpos * row + rpos);
	return add;
}
int main()
{
	int row, column, matrix[10][10], rpos, cpos;
	cout << "Enter the row: " << endl;
	cin >> row;
	cout << "Enter the column: " << endl;
	cin >> column;
	cout << endl
		 << "Enter the Element: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "\t " << matrix[i][j];
			if (j == column - 1)
				cout << endl;
		}
	}

	cout << "Enter the row position: " << endl;
	cin >> rpos;
	cout << endl
		 << "Enter the column position: " << endl;
	cin >> cpos;

	cout << row_major(rpos, cpos, column);
	cout << column_major(rpos, cpos, row);
	return 0;
}