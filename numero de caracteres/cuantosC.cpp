#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
 
int main(){ 
    char  texto [55];
       cout << "Introduce una palabra: "<<endl;
    cin >> texto;
    
 int contar = strlen(texto);
 
  
       

       if (contar>10)
       {
               if (contar%2==0)
          {
             cout<<"la palabra es mayor a 10 caracteres y es par "<< endl;
          }
          else
          {
              cout<<"la palabra es mayor a 10 caracteres y es impar "<< endl;
          }
          
        
       }
       else
       {

          if (contar%2==0)
          {
             cout<<"la palabra es menor a 10 caracteres y es par "<< endl;
          }
          else
          {
              cout<<"la palabra es menor a 10 caracteres y es impar "<< endl;
          }
          
          
       }
       
   
    
    
   
  

    return 0;
}