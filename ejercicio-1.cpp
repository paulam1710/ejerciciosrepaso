#include <iostream>
#include <cmath>   

using namespace std;

double redondear2(double valor) {
    return round(valor * 100.0) / 100.0;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;

    double subtotal = 0.0;

    for (int i = 0; i < n; i++) {
        double precio;
        int cantidad;

        cout << "Producto " << i + 1 << " - Precio: ";
        cin >> precio;
        cout << "Cantidad: ";
        cin >> cantidad;
        

        subtotal += precio * cantidad;
    }

    double impuesto = subtotal * 0.08;
    double total = subtotal + impuesto;

    if (total > 100) {
        double descuento = total * 0.10;
        total -= descuento;
        cout << "\nSe aplico un descuento del 10%." << endl;
    }

    subtotal = redondear2(subtotal);
    impuesto = redondear2(impuesto);
    total = redondear2(total);

    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Impuesto (8%): $" << impuesto << endl;
    cout << "Costo total: $" << total << endl;

    return 0;
}