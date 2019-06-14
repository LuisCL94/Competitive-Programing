#include <iostream>
using namespace std;
 
int main()  {
    
    double i = 0, j = 1;
    
    while(i<=2) {
           
            cout << "I=" << i << " " << "J=" << j << "\n";
            cout << "I=" << i << " " << "J=" << j+1 << "\n";
            cout << "I=" << i << " " << "J=" << j+2 << "\n";
           
            i+= 0.2;
            j+= 0.2;
    
    }
    
    return 0;
}