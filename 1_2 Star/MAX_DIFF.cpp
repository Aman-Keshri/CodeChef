#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    if(s <= n)
	        cout<<s;
	    else
	        cout<<((2*n)-s);
	   
	   cout<<endl;
	}
	return 0;
}
