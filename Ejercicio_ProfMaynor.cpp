//escribir la palabra "Hola" y que lo devuelva al reves
#include <iostream>
using namespace std;
int main (){
    char palabra[10];
    cout<<"Escribe una palabra: ";
    cin>>palabra;
    int i=0;
    while(palabra[i]!='\0'){
        i++;
    }
    i--;
    while(i>=0){
        cout<<palabra[i];
        i--;
    }
    return 0;
}
