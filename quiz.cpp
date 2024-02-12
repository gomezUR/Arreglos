//crear 2 vectores con n cantidad de numeros que el usuario diligencie, sumar los numeros en cada vector
//vamos a crear un vector de n pocisiones simulando el juego de buscaminas y al final mostrar cuantas minas hay de n cantidad de minas 
#include <iostream>
using namespace std; 
int main (){
    int numeros=0
    cout<<"ingrese la cantidad de numeros";
    cin>>cantn;
    string numeros[cantn];

    for (int i = 0; i < cantn; i++)

    {
        cout << "ingrese la pocision "<<i;
        cin>>numeros[i];
    }
    for (int i = 0; i < numeros; i++)
    {
        cout << "los numeros son: "<< numeros[i];
    }
    
}
#include <iostream>
using namespace std; 

int main (){
    int numero2=0
    cout<<"ingrese la cantidad de numeros";
    cin>>cantn2;
    string numero2[cantn2];

    for (int i = 0; i < cantn2; i++)

    {
        cout << "ingrese la pocision "<<i;
        cin>>numero2[i];
    }
    for (int i = 0; i < numero2; i++)
    {
        cout << "los numeros son: "<< numero2[i];
    }
    
}
