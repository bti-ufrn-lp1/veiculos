/**
 * @file    barco.cpp
 * @brief   Implementação da classe Barco
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 * @sa      barco.h
 */

#include <iostream>
using std::cout;
using std::endl;

#include "barco.h"

/** @brief Construtor padrão */
Barco::Barco() {
    // Construtor vazio
}

/**
 * @brief Construtor parametrizado
 * @param v Valor da velocidade média do barco
 */
Barco::Barco(float v) {
    velocidade = v;
}

/**
 * @brief Retorna a velocidade média do barco
 * @return Valor da velocidade média do barco
 */
float Barco::getVelocidade() {
    return velocidade;
}

/**
 * @brief Modifica o valor da velocidade média do barco
 * @param v Valor a ser atribuído à velocidade média
 */
void Barco::setVelocidade(float v) {
    velocidade = v;
}

/** @brief Aciona o barco */
void Barco::ligar() { 
    cout << "Ligando barco" << endl; 
}

/** @brief Indica a movimentação do barco */
void Barco::mover() {
    cout << "Barco em movimento" << endl;
}

/** @brief Aciona a parada do barco */
void Barco::parar() { 
    cout << "Parando barco" << endl; 
}