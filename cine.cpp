#include <iostream>
#include <string>

int main() {

    int edad;
    int cantidad;
    std::string dia;
    char unEstudiante;

    int descuento = 0;
    double precioBase = 100;
    double precioFinal = 0;
    double total = 0;



    std::cout << "Edad: ";
    std::cin >> edad;

    std::cout << "Cantidad de entradas: ";
    std::cin >> cantidad;

    std::cout << "Dia de la semana: ";
    std::cin >> dia;

    bool estudiante = false;

    if (edad >= 18 and edad <= 25) {
        std::cout << "Es estudiante universitario? (s/n): ";
        std::cin >> unEstudiante;

        if (unEstudiante == 's' or unEstudiante == 'S') {
            estudiante = true;
        }
    }

    if (edad < 5) {
        descuento = 60;

    } else if (edad <= 12) {
        descuento = 50;

    } else if (edad <= 17) {
        descuento = 30;

    } else if (edad <= 64) {

        if (estudiante) {
            descuento = 55;

        } else {
            descuento = 0;
        }
    } else {
        descuento = 40;
    }

    precioFinal = precioBase * (1 - descuento);

    if (dia == "lunes" or dia == "martes" or dia == "miercoles" or dia == "jueves") {
        precioFinal = precioFinal * 0.90;
    }

    total = precioFinal * cantidad;

    if (cantidad > 3) {
        total = total * 0.95;
    }

    std::cout << "Total a pagar: " << total << std::endl;

    return 0;
}
