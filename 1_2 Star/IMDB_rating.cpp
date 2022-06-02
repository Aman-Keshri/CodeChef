#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    int s[n],r[n];
	    int mx_r = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>r[i];
	        
	        if(s[i] <= x)
	        {
	            if(mx_r < r[i])
	                mx_r = r[i];
	        }
	    }
	    cout<<mx_r<<"\n";
	}
	return 0;
}
