#include <iostream>
using namespace std;

int main() {
    char lista_nomi[3][5] = {"", "", ""};
    char nome[5] = {""};
    cin >> lista_nomi[0];
    cin >> lista_nomi[1];
    cin >> lista_nomi[2];
    cin >> nome;
    if ((nome[0]==lista_nomi[0][0]) and (nome[1]==lista_nomi[0][1]) and (nome[2]==lista_nomi[0][2]) and (nome[3]==lista_nomi[0][3]) and (nome[4]==lista_nomi[0][4])){
        cout << "0";
    }
    else if ((nome[0]==lista_nomi[1][0]) and (nome[1]==lista_nomi[1][1]) and (nome[2]==lista_nomi[1][2]) and (nome[3]==lista_nomi[1][3]) and (nome[4]==lista_nomi[1][4])){
        cout << "1";
    }
    else if ((nome[0]==lista_nomi[2][0]) and (nome[1]==lista_nomi[2][1]) and (nome[2]==lista_nomi[2][2]) and (nome[3]==lista_nomi[2][3]) and (nome[4]==lista_nomi[2][4])){
        cout << "2";
    }

    return 0;
}
