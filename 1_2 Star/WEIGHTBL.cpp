#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    
	    if(((w2-w1)>=(m*x1) && (w2-w1)<=(m*x2)))
	        cout<<1<<"\n";
	    else
	        cout<<0<<"\n";
	}
	return 0;
}
