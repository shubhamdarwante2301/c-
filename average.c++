#include<iostream>
using namespace std;
main()
{
    int num1, num2, sum, avg;
    cout << "enter two numbers" << endl;
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "sum = " << sum << endl;

    avg = sum / 2;
    cout << "average = " << avg;
}
