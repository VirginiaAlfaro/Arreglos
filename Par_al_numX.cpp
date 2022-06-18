//haga un programa que muestre todos los numeros pares hasta llegar al numero X, el numero X sera
//capturado al iniciar el programa, realice el programa utilizando una estructura while.
#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    int i=0;
    while(i<=numero)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}

