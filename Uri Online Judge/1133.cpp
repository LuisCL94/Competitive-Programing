#include <iostream>
 
using namespace std;
 
int main() {
    
    int X, Y;

 	cin>>X>>Y;
 	
 	if(X<Y) 
 		for(int i=X+1; i<Y; i++) 	
    		if(i%5==2 || i%5==3)
    			cout<<i<<endl;
 	
    if(X>Y) 
 		for(int j=Y+1; j<X; j++) 	
    		if(j%5==2 || j%5==3)
    			cout<<j<<endl;   	
    
   	return 0;
}   