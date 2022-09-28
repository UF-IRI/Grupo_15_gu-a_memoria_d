#include "prueba.h"
#include "iostream"
using namespace std;

namespace foobar
{
    int Example::getValue() const
    {
        return 99;
    }
}

float calculadora_simple(double numero_1, double numero_2, int cuenta)
{

    double  resultado = 0;

    if (cuenta == 4 && numero_2 == 0)
    {
        cout << "no se puede realizar esta ecuacion" << endl;       //esto previene qu se realicen divsiones por 0
        return -1;
    }
    else
    {
        switch (cuenta)
        {
        case 1:resultado = numero_1 + numero_2;
            break;
        case 2:resultado = numero_1 - numero_2;
            break;
        case 3: resultado = numero_1 * numero_2;
            break;
        case 4: resultado = numero_1 / numero_2;
            break;
        case 5: resultado = pow(numero_1, numero_2);
            break;
        default:cout << "no se eligio ninguna cuenta" << endl;      //en caso de que no se haya elegido una operacion
        }
    }
    cout << "resultado: " << resultado << endl;                     //la funcion devuelve el valor correspondiente y lo imprime para el usuario
    return resultado;
}

float Bhaskara_dif_positivo(float a, float b, float c)
{
    float R, R1;
    R = R1 = 0;

    if ((b * b) - 4 * a * c == 0)                               //si lo que esta dentro de la raiz es igual a cero
    {
        R = -b / (2 * a);                                       //calculo el valor de la formula de bhaskara sin la raiz ya que me dio cero
        return R;                                               //retorna una raiz doble 
    }

    else if ((b * b) - 4 * a * c > 0)                           //si lo que esta en la raiz da un numero MAYOR a 0 
    {
        R1 = (- b + (sqrt((b * b) - (4 * a * c)))) / (2 * a);
        return R1;                                     //retorna dos raices 
    }
    else if (((b * b) - 4 * a * c )< 0)                           // si lo que esta en la raiz me da un numero MENOR a 0 
        return -1;
}

float Bhaskara_dif_negativo(float a, float b, float c)
{
    float R,R2;
    R = R2 = 0;

    if ((b * b) - 4 * a * c == 0)                         
    {
        R = -b / (2 * a);                                 
        return R;                                         
    }

    else if ((b * b) - 4 * a * c > 0)                     
    {
        R2 = ( - b - (sqrt((b * b) - (4 * a * c))) )/ (2 * a);
        return R2;                                    
    }
    else if (((b * b) - 4 * a * c) < 0)                   
        return -1;
}