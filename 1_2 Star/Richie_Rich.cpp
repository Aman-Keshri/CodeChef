#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
	    int a,b,x;
	    cin>>a>>b>>x;
	    cout<<((b-a)/x);
	    cout<<endl;
	}
	return 0;
}
