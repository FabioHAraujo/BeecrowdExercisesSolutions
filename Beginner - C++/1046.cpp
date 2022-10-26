#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int hora1,hora2;
    
    cin >> hora1 >> hora2;
    
    if(hora1 >= hora2)
         printf("O JOGO DUROU %d HORA(S)\n", (24 - hora1) + hora2);
    else
        printf("O JOGO DUROU %d HORA(S)\n", hora2 - hora1);
        
    return 0;
}