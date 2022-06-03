#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    if(((n*(n+1))/2)%2)
	        cout<<n-1<<"\n";
	    else
	        cout<<n<<"\n";
	}
	return 0;
}
