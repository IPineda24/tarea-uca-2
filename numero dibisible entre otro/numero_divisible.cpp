
#include<iostream>


using namespace std;
int main(){
 int a,b,c,d;




cout<<"Ingresar el primer numero:"<<endl;
cin>>a;
cout<<"Ingresar el segundo numero:"<<endl;
cin>>b;

c = a%b;
d = a/b;

if (c == 0)
{
    cout <<"es una division exacta y el resultado es: "<<d<<endl;
} else
{
    cout<< "la division no es exacta porque queda un residuo de: "<<c<<endl;
}

  }


