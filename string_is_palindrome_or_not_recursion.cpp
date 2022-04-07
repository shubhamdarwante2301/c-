//check given string is palinrome or not using recursion
//https://ide.geeksforgeeks.org/YVdOP5Qdxh

#include <iostream>
using namespace std;

bool fun(string str, int left, int right)
{
    if(left >= right)
        return true;
    
    if(str[left] != str[right])
        return false;
    else
        return fun(str, left+1, right-1);
}

int main() {
	string str = "o";
	int len = str.length();
	
	bool key = fun(str, 0, len-1);
	
	key == true ? cout<<"string is palindrome" : cout<<"string is not palindrome";
	return 0;
}