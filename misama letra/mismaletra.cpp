#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
 
int main(){ 
    char  texto [25];
       cout << "Introduce una palabra: "<<endl;
    cin >> texto;
    
 int contar = strlen(texto);
 
    
    if (texto[0]== texto[contar-1])
    {
       cout<<"la palabra tiene la misma letra al inicio y al final"<<endl;
    }else
    {
       cout<<"la palabra no tiene la misma letra al inicio y al final"<<endl;
    }
    
    
   
  

    return 0;
}