#include<iostream>
using namespace std;

int main()
{
    double Salary;
    double Percentage;
    double bonusPercentage;
    int exceptionalRate;
    int years;

    cout << "Enter the current salary of the employee: ";
    cin >> Salary;

    cout << "Enter the yearly increment percentage (e.g., 5): ";
    cin >> Percentage;

    cout << "Enter the performance bonus percentage (e.g., 2): ";
    cin >> bonusPercentage;

    cout << "Enter the exceptional rating (1 for exceptional, 0 otherwise): ";
    cin >> exceptionalRate;

    cout << "Enter the number of years to simulate: ";
    cin >> years;

    for (int Z = 1; Z <= years; Z++)
    {
        double incrementAmount = Salary * (Percentage / 100);
        Salary += incrementAmount;

        if (exceptionalRate == 1) {
            double bonusAmount = Salary * (bonusPercentage / 100);
            Salary += bonusAmount;
        }

        cout << "Salary after year " << Z << ": " << Salary << endl;
    }

    return 0;
}