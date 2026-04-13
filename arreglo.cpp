#include <iostream>

int main() {

    int numeros[10] = {1, 5, 3, 7, 5, 9, 2, 5, 8, 3};
    int buscar;
    int contador = 0;

    std::cout << "Arreglo: ";

    for (int variable = 0; variable < 10; variable++) {
        std::cout << numeros[variable] << " ";
    }

    std::cout << std::endl;

    std::cout << "Ingrese numero a buscar: ";
    std::cin >> buscar;

    for (int variable = 0; variable < 10; variable++) {
        if (numeros[variable] == buscar) {
            contador++;
        }
    }

    if (contador > 0) {
        std::cout << "El numero aparece " << contador << " veces" << std::endl;
    } else {
        std::cout << "El numero no se encuentra en el arreglo" << std::endl;
    }

    return 0;
}
