#include<iostream>
using namespace std;
main()
{
    int num;
    cout << "enter a number ";
    cin >> num;

    for (int i=1; i<=num; i++)
    {
        for(int j=num; j>=i; j--)
        {
            cout << "*";
        }
        for(int a=3; a<=i*2; a++)
        {
            cout << " ";
        }
        for(int k=num; k>=i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
