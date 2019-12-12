#include<iostream>
using namespace std;

int main()
{
	int rows;
	cout <<"\t\t\tPascal\'s triangle\n\n "<< "Enter the number of rows : ";cin >> rows;
	for (int num,line = 0; line < rows; line++)
	{
		for (int space = 1; space < (rows - line); space++)
		{
			cout << " ";
		}
		num = 1;
		for (int out = 0; out <= line; out++)
		{
			cout <<" "<<num;
			num = (num * (line - out)) / (out + 1);
		}
		cout << endl;
	}
	system("pause > 0");
	return 0;
}
