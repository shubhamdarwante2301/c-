//count distinct element in array
//time complexity O(n^2)
//this can be solve in O(n log n) and O(n) also
#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        int flag = 0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
        }
    }
    return count;
}


int main() {
	int n;
    cout<<"enter the size of an array"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the "<<n<<" element in an array"<<endl;
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
	
	int count = countDistinct(arr, n);
	cout<<"total distinct element in an array is "<<count;
	return 0;
}