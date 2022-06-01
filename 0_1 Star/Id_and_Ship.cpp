#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
	    char str;
	    cin>>str;
	    
	    if(str == 'B' || str == 'b') cout<<"BattleShip";
	    else if(str == 'C' || str == 'c') cout<<"Cruiser";
	    else if(str == 'D' || str == 'd') cout<<"Destroyer";
	    else if(str == 'F' || str == 'f') cout<<"Frigate";
        cout<<endl;
	}
	return 0;
}
