/**
 * @file    veiculo.cpp
 * @brief   Implementação da classe Veiculo
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 * @sa      veiculo.h
 */

#include <iostream>
using std::cout;
using std::endl;

#include "veiculo.h"

/** @brief Construtor padrão */
Veiculo::Veiculo() {
    // Construtor vazio
}

/**
 * @brief Construtor parametrizado
 * @param fab Fabricante do veículo
 * @param mod Modelo do veículo
 * @param a Ano de fabricação do veículo
 * @param c Cor do veículo
 * @param pl Placa do veículo
 */
Veiculo::Veiculo(string fab, string mod, short a, string c, string pl) {
    fabricante = fab;
    modelo = mod;
    ano = a;
    cor = c;
    placa = pl;
}

/**
 * @brief Retorna o fabricante do veículo
 * @return Nome do fabricante do veículo
 */
string Veiculo::getFabricante() {
    return fabricante;
}

/**
 * @brief Modifica o fabricante do veículo
 * @param fab Nome a ser atribuído ao fabricante do veículo
 */
void Veiculo::setFabricante(string fab) { 
    fabricante = fab; 
}

/**
 * @brief Retorna o modelo do veículo
 * @return Nome do modelo do veículo
 */
string Veiculo::getModelo() { 
    return modelo; 
}

/**
 * @brief Modifica o modelo do veículo
 * @param mod Nome a ser atribuído ao modelo do veículo
 */
void Veiculo::setModelo(string mod) { 
    modelo = mod; 
}

/**
 * @brief Retorna o ano de fabricação do veículo
 * @return Ano de fabricação do veículo
 */
short Veiculo::getAno() {
    return ano;
}

/**
 * @brief Modifica o ano de fabricação do veículo
 * @param a Valor a ser atribuído ao ano de fabricação do veículo
 */
void Veiculo::setAno(short a) {
    ano = a;
}

/**
 * @brief Retorna a cor do veículo
 * @return Cor do veículo
 */
string Veiculo::getCor() {
    return cor;
}

/**
 * @brief Modifica a cor do veículo
 * @param c Descrição a ser atribuída à cor do veículo
 */
void Veiculo::setCor(string c) {
    cor = c;
}

/**
 * @brief Retorna a placa do veículo
 * @return Identificação da placa do veículo
 */
string Veiculo::getPlaca() { 
    return placa; 
}

/**
 * @brief Modifica a placa do veículo
 * @param pl Identificação a ser atribuída à placa do veículo
 */
void Veiculo::setPlaca(string pl) { 
    placa = pl; 
}

/** @brief Aciona o veículo */
void Veiculo::ligar() {
    cout << "Ligando veiculo (" << toString() << ")" << endl;
}

/** @brief Indica a movimentação do veículo */
void Veiculo::mover() {
    cout << "Veiculo " << toString() << " em movimento" << endl;
}

/** @brief Aciona a parada do veículo */
void Veiculo::parar() {
    cout << "Parando veículo (" << toString() << ")" << endl;
}

/**
 * @brief Retorna uma representação em string do veículo
 * @return String contendo o nome do fabricante, o nome do modelo e
 *         a identificação de placa do veículo
 */
string Veiculo::toString() {
    return fabricante + " " + modelo + ", placa " + placa;
}