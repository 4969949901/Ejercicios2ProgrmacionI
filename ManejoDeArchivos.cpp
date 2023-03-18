#include <iostream>
#include <math.h>


using namespace std;

void calculoFactorial(){
    int i,num,fact=1;

    cout<<"Se determinara un factorial segun eleccion\n";
    cout<<"Ingrese un numero:\n";
    cin>> num;

    for ( i=1;i<= num; i++)
        fact = fact *= i;

        cout << "Se determina que el factorial de:" << num << " es: " << fact << endl;


        cout << "\n\n";

}

void serieFibonacci(){

    cout<<"Muestra de serie fibonacci"<<endl;
    int a=0,b=1,c=1;

    cout<<"Cantidad de elementos menor a Diez: "<<endl;
    for (int i = 1; i < 11; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
        cout<<"\n";
    }

    }


void calculoNumeroPrimo(){
    int a=0, num;
    cout<<"Calculo de numero primos "<<endl;
    cout<<"Ingrese un numero para determinar si es un numero primo o no\n";
    cin>> num;
    for(int i=1;i<(num+1);i++){
        if(num%i==0){
            a++;
        }
    }
    if(a!=2){
        cout<<"No es Primo\n";
    }else{
        cout<<"Si es Primo\n";
    }

}

void calculoNumeroPar(){
    int num;
    cout<<"Ingrese un numero para determinar si es numero par: "<<endl;
    cin>>num;
    if(num % 2 == 0){
        cout<<"El numero es Par\n";
    }

    else{
        cout<<"El numero es Impar\n";
    }

}


void tablaMultiplicar(){
    int n;

    cout<<"Tabla de multiplicar de numeros a eleccion\n";
    cout <<"Favor ingrese el numero para mostrar la tabla de multiplicar que desea:\n";
    cin>>n;

    for (int i=1;i<11;i++){
        cout<<i<<"*"<<n<<"="<<i*n;
        cout<<"\n";
    }

}
