#include<bits/stdc++.h>
using namespace std ;



int main()
{
	float stocks, locks, barrels, sales = 0.0, comission = 0.0;
	float barrelp = 25.0;
	float stockp = 30.0;
	float lockp = 45.0;
	cout << "Enter the number of locks: ";
	cin >> locks ;
	cout << "Enter the number of stocks: ";
	cin >> stocks ;
	cout << "Enter the number of barrels: ";
	cin >> barrels ;

	sales = locks * lockp + stocks * stockp + barrels * barrelp;
	printf("\nSales = %d", (int)sales);
	if (sales > 1800.0)
	{
		comission = 0.10 * 1000;
		comission = comission + 0.15 * 800.0;
		comission = comission + 0.20 * (sales - 1800.0);
	}
	else if (sales > 1000.0)
	{
		comission = 0.10 * 1000.0;
		comission = comission + 0.15 * (sales - 1000.0);
	}
	else
		comission = 0.10 * sales;
	printf("\nComission = %f", comission);


	return 0;
}