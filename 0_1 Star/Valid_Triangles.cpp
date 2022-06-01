#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b+c == 180) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
