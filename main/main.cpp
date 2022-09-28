#include <cstdlib>
#include "iostream"

#include "prueba.h"

using namespace std;

int main(int argc, char** argv)
{
    foobar::Example example{};
    std::cout << "Example.getValue() => " << example.getValue() << std::endl;

        double numerador = 0;
        double denominador = 0;
        int seleccion = 0;
        bool ciclo = true;
        double resultado;
        cout << "ingrese dos numeros, tenga en cuenta el orden en el que son ingresados" << endl;
        cin >> numerador >> denominador;

        do
        {
            cout << "que operacion desea realizar?" << endl << "1.suma" << endl << "2.resta" << endl << "3.multiplicacion" << endl << "4.division" << endl << "5.potenciacion" << endl;
            cin >> seleccion;
            if (seleccion > 0 && seleccion < 5)
            {
                resultado = calculadora_simple(numerador, denominador, seleccion);
                ciclo = false;
            }
            else
                cout << "no eligio ninguna cuenta, vuelva a intentarlo";
        } while (ciclo == true);

        cout << "Su resultado es: " << resultado << endl;

        cout << "para calcular las raices de una ecuacion de segundo grado ingrese los valores de los coeficientes a, b y c, en ese orden" << endl;
        float a, b, c;
        a = b = c = 0;
        cin >> a >> b >> c;
        float x1, x2;
        x1 = x2 = 0;

        x1 = Bhaskara_dif_positivo(a, b, c);
        x2 = Bhaskara_dif_negativo(a, b, c);

    return EXIT_SUCCESS;
}
