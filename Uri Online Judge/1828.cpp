#include <bits/stdc++.h>

using namespace std;

int main() {
    string choice1, choice2;
    int num;
    cin>>num;

    for(int i=0; i<num; i++) {
    
        cin>>choice1>>choice2;
        printf("Caso #%d: ", i+1);

        if(choice1 == "tesoura" && choice2 == "papel")
            printf("Bazinga!\n");
        else if(choice1 == "papel" && choice2 == "pedra")
            printf("Bazinga!\n");
        else if(choice1 == "pedra" && choice2 == "lagarto")
            printf("Bazinga!\n");
        else if(choice1 == "lagarto" && choice2 == "Spock")
            printf("Bazinga!\n");
        else if(choice1 == "Spock" && choice2 == "tesoura")
            printf("Bazinga!\n");
        else if(choice1 == "tesoura" && choice2 == "lagarto")
            printf("Bazinga!\n");
        else if(choice1 == "lagarto" && choice2 == "papel")
            printf("Bazinga!\n");
        else if(choice1 == "papel" && choice2 == "Spock")
            printf("Bazinga!\n");
        else if(choice1 == "Spock" && choice2 == "pedra")
            printf("Bazinga!\n");
        else if(choice1 == "pedra" && choice2 == "tesoura")
            printf("Bazinga!\n");  
        else if(choice1==choice2)
            printf("De novo!\n");
        else
            printf("Raj trapaceou!\n");
        }

    return 0;
}