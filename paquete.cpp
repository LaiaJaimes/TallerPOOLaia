#include <iostream>
#include <string>

    int main() {
		
    double peso;
    int cantidad;
    std::string destino;
    std::string region;
    char frecuente;

    double costo = 0;
    double total = 0;

    std::cout << "Peso: ";
    std::cin >> peso;

    std::cout << "Cantidad: ";
    std::cin >> cantidad;

    std::cout << "Destino (nacional/internacional): ";
    std::cin >> destino;

    if (peso < 1) {
        costo = 50;

    	} else if (peso < 5) {
        costo = 100;

    	} else if (peso < 10) {
        costo = 150;

    	} else {
        costo = 200;

    }

    if (destino == "internacional") {
        std::cout << "Region (america/europa/asia): ";
        std::cin >> region;

        if (region == "america") {
            costo = costo * 1.15;
        } else if (region == "europa") {
            costo = costo * 1.25;
        } else {
            costo = costo * 1.40;
        }
    }

    total = costo * cantidad;

    std::cout << "Cliente frecuente? (si/no): ";
    std::cin >> frecuente;

    if (frecuente == 's' or frecuente == 'S') {
        total = total * 0.90;
    }

    if (cantidad > 3) {
        total = total * 0.95;
    }

    std::cout << "Total a pagar: " << total << std::endl;

    return 0;
}
