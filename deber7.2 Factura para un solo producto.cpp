#include<iostream>
#include<string>

using namespace std;

struct Producto {
    string nombre;
    double precio;
};

double calcularIVA(double subtotal) {
    double IVA = 0.15; 
    return subtotal * IVA;
}

int main() {
    Producto producto;
    cout << "Ingrese el nombre del producto: ";
    getline(cin, producto.nombre);
    cout << "Ingrese el precio del producto: ";
    cin >> producto.precio;

    double subtotal = producto.precio;
    double iva = calcularIVA(subtotal);
    double total = subtotal + iva;

    cout << "\nDetalles de la factura: \n";
    cout << "Producto: " << producto.nombre << "\n";
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "IVA (12%): $" << iva << "\n";
    cout << "Total a pagar: $" << total << "\n";

    return 0;
}

