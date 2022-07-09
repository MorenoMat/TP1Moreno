#ifndef H_H_INCLUDED
#define H_H_INCLUDED
#define PI 3.1416
using std::string;
using namespace std;
#include <array>
#endif // H_H_INCLUDED
//ejercicio 1
float superficieCirculo(int radio)
{
    return(PI*radio*radio);
}

//ejercicio 2
long suma(int desde,int hasta)
{
    return(((hasta-desde+1)*(desde+hasta))/2);
}

//ejercicio 3
long potencia(int a, int b)
           {
               long pot=1;

               for(int i=1;i<=b; i++)
                pot*= a;


               return pot;
           }


//ejercicio 4





long factorial(int numero)
{
    long fact = 1;
    for(int i = numero; 1 <=i; i--)
        fact = fact*i;
        return fact;
}

//ejercicio 5
int edad(int dia, int mes, int anio)
         {
             int anioActual=2022, mesactual = 06 ,diaActual= 27;

             int aux= anioActual-anio;
             {
                 if(mes>mesactual)
                    aux--;
                 else if(mesactual==mes)
                    if(dia>diaActual)
                    aux--;
                 return aux;
             }

         }







 string romanos(int numero)
{
    string numeroRomano;
    int millares, centenas, decenas, unidades;
    //separar el numero recibido como parametro
    unidades= numero%10; numero /=10; // eso es como poner numero = numero /10
// ej lo primero se queda con lo que va antes de la coma y lo 2do con lo que va despues
//ej 2022/10 es 202,2 1=202 y 2=0,2
   decenas= numero %10; numero /=10; // 1= 20 2= 0,22
    centenas = numero%10; numero /=10;// 1= 2 2= 0,22
    millares = numero%10; numero /=10;// 1= 20 2= 0,22

    switch(millares)
    {
     case 1:
     numeroRomano = "M";
     break;
     case 2:
     numeroRomano = "MM";
     break;
     case 3:
     numeroRomano = "MMM";
     break;


     }
     switch(centenas)
    {
     case 1:
     numeroRomano += "C";
     break;
     case 2:
     numeroRomano = "CC";
     break;
     case 3:
     numeroRomano = "CCC";
     break;
     case 4:
        numeroRomano += "CD";
        break;
     case 5:
        numeroRomano += "D";
        break;
     case 6:
        numeroRomano += "DC";
        break;
     case 7:
        numeroRomano += "DCC";
        break;
     case 8:
        numeroRomano += "DCCC";
        break;
     case 9:
        numeroRomano += "M";
        break;


     }
     switch(decenas)
     {
          case 1:
     numeroRomano += "X";
     break;
     case 2:
     numeroRomano = "XX";
     break;
     case 3:
     numeroRomano = "XXX";
     break;
     case 4:
        numeroRomano += "XL";
        break;
     case 5:
        numeroRomano += "L";
        break;
     case 6:
        numeroRomano += "LX";
        break;
     case 7:
        numeroRomano += "LXX";
        break;
     case 8:
        numeroRomano += "LXXX";
        break;
     case 9:
        numeroRomano += "XC";
        break;
     }
     switch(unidades)
     {
         case 1:
     numeroRomano += "I";
     break;
     case 2:
     numeroRomano = "II";
     break;
     case 3:
     numeroRomano = "III";
     break;
     case 4:
        numeroRomano += "IV";
        break;
     case 5:
        numeroRomano += "V";
        break;
     case 6:
        numeroRomano += "VI";
        break;
     case 7:
        numeroRomano += "VII";
        break;
     case 8:
        numeroRomano += "VIII";
        break;
     case 9:
        numeroRomano += "IX";
        break;
     }
return numeroRomano;
}

bool esPrimo(int numero)
{
    bool aux;
    if(numero<=1)
            aux=false;
    else
            aux=true;

    for(int i =2; i< numero; i ++)
        if((numero%i)==0)
            aux=false;
    return aux;
}

// ejercicio 8 determinar si la contraseña es valida
bool contrasena(string unaContrasenia, string abcd1234)
{   bool aux;
     if(unaContrasenia == abcd1234)
aux=false;
else
    aux=true;


}


// ejercicio 9
void tablaDel(int numero, int *tabla)
{

    int i=1;
    for( i; i<10; i++)
    {

         tabla[i] = numero* (i+1);
 cout << "la tabla del "<< numero<< " es: "<< tabla[i]<< endl;

        }
*tabla= tabla[i];


}


// ejercicio 10
void fibonacci(int numero, int *sucesion)
{
int aux=0;
int fib=1;

    for(int i = 1; i <= numero; i++){
     aux+= fib;
     fib= aux - fib;

    sucesion [i]= fib;
    cout << "los primeros  "<<numero<<" numeros de la sucesion de fibonacci son : "<< sucesion [i]<< endl;


}}


