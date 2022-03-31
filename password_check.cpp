//check given password is valis or not on given condition
//1) size of a password should be equal to or greater than given size
//2) first letter of a password should not be a digit
//3) must not have a space or +
//4) at least one numeric digit
//5) at least one capital letter

#include<iostream>
using namespace std;

bool checkPass(char pass[], int n, int len)
{
    if(n < len)
    {
        return false;
    }
    if(pass[0]-'0' >= 0 && pass[0]-'0' <= 9)
    {
        return false;
    }

    int i = 0, cap=0, digi = 0;
    while(i<n)
    {
        if(pass[i] == ' ' || pass[i] == '*')
            return false;

        if(pass[i] >= 65 && pass[i] <= 90)
            cap++;

        if(pass[i]-'0' >=0 && pass[i]-'0'<=9)
            digi++;
        
        i++;
    }
    
    return cap>0 && digi>0;

}
int main()
{
    string pass;
    getline(cin, pass);

    int len;
    cin>>len;
    int n = pass.length();
    char *c = &pass[0];

    bool key = checkPass(c, n, len);

    if(key == true)
    {
        cout<<"password is valid"<<endl;
    }
    else
    {
        cout<<"password is invalid"<<endl;
    }
}