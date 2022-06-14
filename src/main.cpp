/**
 * @file    main.cpp
 * @brief   Implementação do programa principal
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 */

#include <iostream>
using std::cout;
using std::endl;

#include "anfibio.h"
#include "barco.h"
#include "carro.h"

/** @brief Função principal */
int main() {
    Carro c("Toyota", "Corolla", 2022, "Prata", "ABC1D23", 22.5);
    cout << "Carro: " << c.toString() << endl;
    c.ligar();

    Veiculo* v = &c;
    cout << endl << "Veículo: " << v->toString() << endl;
    v->ligar();

    Barco b(75);
    cout << endl << "Barco: velocidade média " << b.getVelocidade() << " km/h" << endl;
    b.ligar();

    VeiculoAnfibio va("Gibbs Amphibians", "Quadski", 2013, "Vermelho", "ATV1X42", 
        72.0, "ATV", true);
    string blindado = va.isBlindado() ? "blindado" : "não blindado";
    cout << endl << "Veículo anfíbio: " << va.toString() << " (" << blindado << ")" << endl;

    return 0;
}