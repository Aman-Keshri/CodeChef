#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double s,a,b,c;
	    cin>>s>>a>>b>>c;
	    double cp;
	    cp = s + (s*(c/100));
	    
	    if(cp>=a && cp<=b)
	        cout<<"Yes"<<"\n";
	    else
	        cout<<"No"<<"\n";
	}
	return 0;
}
