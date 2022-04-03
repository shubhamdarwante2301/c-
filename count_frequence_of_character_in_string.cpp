//count frequency of a character in a string
//https://ide.geeksforgeeks.org/vlcpTjhmpE

#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	
	int arr[26] = {0};
	int m = str.length();
	
	for(int i=0; i<m; i++)
	{
	    arr[str[i]-97] = ++arr[str[i]-97];
	    //cout<<str[i]-97<<endl;
	}
	for(int i=0; i<26; i++)
	{
	    if(arr[i]>0)
	    {
	        char c = i+97;
	        cout<<c<<arr[i]<<endl;
	        
	    }
	}
	
	return 0;
}