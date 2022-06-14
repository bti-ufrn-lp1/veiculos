/**
 * @file    carro.cpp
 * @brief   Implementação da classe Carro
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 * @sa      carro.h
 */

#include <iostream>
using std::cout;
using std::endl;

#include "carro.h"

/**
 * @brief Construtor parametrizado
 * @details Este construtor herda os atributos da classe Veiculo
 * @param fab Nome do fabricante do carro
 * @param mod Modelo do carro
 * @param a Ano de fabricação do carro
 * @param c Cor do carro
 * @param pl Identificação da placa do carro
 * @param vol Valor do volume do porta malas do carro
 * @see Veiculo#Veiculo
 */
Carro::Carro(string fab, string mod, short a, string c, string pl, float vol) {
    fabricante = fab;
    modelo = mod;
    ano = a;
    cor = c;
    placa = pl;
    volumePortaMalas = vol;
}

/**
 * @brief Retorna o volume do porta malas do carro
 * @return Valor do volume do porta malas do carro
 */
float Carro::getVolumePortaMalas() {
    return volumePortaMalas;
}

/**
 * @brief Modifica o valor do volume do porta malas do carro
 * @param vol Valor a ser atribuído ao volume do porta malas
 */
void Carro::setVolumePortaMalas(float vol) {
    volumePortaMalas = vol;
}

/**
 * @brief Aciona o carro
 * @see Veiculo#ligar
 */
void Carro::ligar() {
    cout << "Ligando carro (" << toString() << ")" << endl;
}

/**
 * @brief Indica a movimentação do carro
 * @see Veiculo#mover
 */
void Carro::mover() {
    cout << "Carro " << toString() << " em movimento" << endl;
}

/**
 * @brief Aciona a parada do carro
 * @see Veiculo#parar
 */
void Carro::parar() {
    cout << "Parando carro (" << toString() << ")" << endl;
}