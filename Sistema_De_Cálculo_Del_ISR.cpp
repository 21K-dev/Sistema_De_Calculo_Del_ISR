/*
Sistema_De_Cálculo_Del_ISR.cpp:

Crear un programa en C++ que lea el sueldo de un empleado, calcule el ISR (Impuesto
Sobre la Renta) y muestre en pantalla el sueldo y el descuento de ISR a ser descontado,
de acuerdo con una escala salarial disponible en la plataforma de la DGII, si no aplica
para descuento, mostrar un cero (0) o N/A.
*/

#include <iostream>
using namespace std;

int main() {
    
    double sueldo_Bruto = 0.0, Descuento = 0.0, sueldo_Neto = 0.0;


    cout << "| SISTEMA DE CALCULO DEL ISR |\n";
    cout << "Bienvenido a nuestro programa, te ayudamos con tu pago tributario.\n" << endl;

    cout << "Digite su sueldo bruto: ";
    cin >> sueldo_Bruto;

    if (sueldo_Bruto <= 34685.00) {
        Descuento = 0.0;
        sueldo_Neto = sueldo_Bruto;

        cout << "\nSueldo original: RD$ " << sueldo_Bruto << endl;
        cout << "Descuento de ISR: N/A (Monto exento)" << endl;
        cout << "Sueldo neto a recibir: RD$ " << sueldo_Neto << endl;
    }

    else if (sueldo_Bruto <= 52027.41) {

        Descuento = (sueldo_Bruto - 34685.00) * 0.15;
        sueldo_Neto = sueldo_Bruto - Descuento;

        cout << "\nSueldo original: RD$ " << sueldo_Bruto << endl;
        cout << "Descuento de ISR: RD$ " << Descuento << endl;
        cout << "Sueldo neto a recibir: RD$ " << sueldo_Neto << endl;
    }

    else if (sueldo_Bruto <= 72260.25) {

        Descuento = 2601.33 + ((sueldo_Bruto - 52027.41) * 0.20);
        sueldo_Neto = sueldo_Bruto - Descuento;

        cout << "\nSueldo original: RD$ " << sueldo_Bruto << endl;
        cout << "Descuento de ISR: RD$ " << Descuento << endl;
        cout << "Sueldo neto a recibir: RD$ " << sueldo_Neto << endl;
    }

    
    else {
    
        Descuento = 6648.00 + ((sueldo_Bruto - 72260.25) * 0.25);
        sueldo_Neto = sueldo_Bruto - Descuento;

        cout << "\nSueldo original: RD$ " << sueldo_Bruto << endl;
        cout << "Descuento de ISR: RD$ " << Descuento << endl;
        cout << "Sueldo neto a recibir: RD$ " << sueldo_Neto << endl;
    }

    return 0; 
}