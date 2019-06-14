#include <iostream>
 
using namespace std;
 
int main() {
    	
 	int combustivel, alcool = 0, gasolina = 0, diesel = 0;
    
    while(1) {	
        
        cin >> combustivel;
		
		if (combustivel == 1)  
			alcool += 1;
		if (combustivel == 2)  
			gasolina += 1;
		if (combustivel == 3) 
	    	diesel += 1;
        if (combustivel == 4) 
        	break;
	}
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << diesel << endl;
    
   	return 0;
}   