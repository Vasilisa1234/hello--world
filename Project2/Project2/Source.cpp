#include <iostream>
using namespace std;
/// <summary>
/// This function calculates the sum from the first to the second entered numbers.
/// </summary>
void sumOfNumbers(int first, int second, int sum)
{
	// Inital value - first, final value - second, cycle step - 1.
	for (int i = first; i <= second; i++)
	{
		sum = sum + i;
	}
	cout << "—умма чисел от " << first << " до " << second << " = " << sum << endl;
}
int main()
{
	setlocale(0, "");
	int k, n;
	// The sum from the first to the second entered numbers.
	int sum = 0;
	cout << "¬ведите число с которого начнетс€ подсчет суммы ";
	cin >> k;
	cout << "¬ведите последнее число которое будет добавлено в сумму ";
	cin >> n;
	try
	{
		// An exception that is triggerd when the inital number k is greater than the final number n.
		if (k > n)
		{
			throw "ѕервое введенное число больше второго";
		}
		sumOfNumbers(k, n, sum);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	system("pause");
}