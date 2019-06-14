#include <bits/stdc++.h>
using namespace std;
#define len(a) (int)(a).size()
#define mcc map<char,char>

int main() {
    mcc ch1_ch2;
    ch1_ch2['=']='-';
    ch1_ch2['-']='0';
    ch1_ch2['0']='9';
    ch1_ch2['9']='8';
    ch1_ch2['8']='7';
    ch1_ch2['7']='6';
    ch1_ch2['6']='5';
    ch1_ch2['5']='4';
    ch1_ch2['4']='3';
    ch1_ch2['3']='2';
    ch1_ch2['2']='1';
    ch1_ch2['1']='`';
    ch1_ch2['\\']=']';
    ch1_ch2[']']='[';
    ch1_ch2['[']='P';
    ch1_ch2['P']='O';
    ch1_ch2['O']='I';
    ch1_ch2['I']='U';
    ch1_ch2['U']='Y';
    ch1_ch2['Y']='T';
    ch1_ch2['T']='R';
    ch1_ch2['R']='E';
    ch1_ch2['E']='W';
    ch1_ch2['W']='Q';
    ch1_ch2['\'']=';';
    ch1_ch2[';']='L';
    ch1_ch2['L']='K';
    ch1_ch2['K']='J';
    ch1_ch2['J']='H';
    ch1_ch2['H']='G';
    ch1_ch2['G']='F';
    ch1_ch2['F']='D';
    ch1_ch2['D']='S';
    ch1_ch2['S']='A';
    ch1_ch2['/']='.';
    ch1_ch2['.']=',';
    ch1_ch2[',']='M';
    ch1_ch2['M']='N';
    ch1_ch2['N']='B';
    ch1_ch2['B']='V';
    ch1_ch2['V']='C';
    ch1_ch2['C']='X';
    ch1_ch2['X']='Z';
    ch1_ch2[' ']=' ';

    string line;
    while(getline(cin, line)) {
        for(int i=0; i<len(line); i++) 
            cout<<ch1_ch2[line[i]];
    printf("\n");
    }
    return 0;
}