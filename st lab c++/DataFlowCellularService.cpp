#include<iostream>
#include<stdlib.h>
using namespace std;
double calculateBill(int usage)
{
    double bill = 0; //1
    if (usage > 0) //2
    {
        bill = 40; //3
    }
    if (usage > 100) //4
    {
        if (usage <= 200) //5
        {
            bill += (usage - 100) * 0.5; //9
        }
        else
        {
            bill += 50 + (usage - 200) * 0.1; //6
            if (bill >= 100) //7
            {
                bill = bill * 0.9; //8
            }
        }
    }
    return bill; //1
}

int main()
{   int usage;
    while (true)
    {   cout << "\n Enter usage(Enter -1 to exit): ";
        cin >> usage;
        if (usage == -1)
            exit(0);
        cout << "\nThe total bill is: " << calculateBill(usage); //0
    }//1
    return 0;
}