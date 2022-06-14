/**
 * @file    anfibio.cpp
 * @brief   Implementação da classe VeiculoAnfibio
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 * @sa      anfibio.h
 */

#include "anfibio.h"

/**
 * @brief Construtor parametrizado
 * @details Este construtor herda os atributos das classes Carro e Barco
 * @param fab Fabricante do veículo
 * @param mod Modelo do veículo
 * @param a Ano de fabricação do veículo
 * @param c Cor do veículo
 * @param pl Placa do veículo
 * @param v Velocidade média do barco
 * @param tipo Tipo do veículo anfíbio
 * @param isBlindado Indica se o veículo anfíbio é blindado ou não
 * @see Carro#Carro
 * @see Barco#Barco
 */
VeiculoAnfibio::VeiculoAnfibio(string fab, string mod, short a, string c, 
            string pl, float v, string tipo, bool isBlindado) {
    fabricante = fab;
    modelo = mod;
    ano = a;
    cor = c;
    placa = pl;
    velocidade = v;
    tipoAnfibio = tipo;
    blindado = isBlindado;
}

/**
 * @brief Retorna o tipo do veículo anfíbio
 * @return Tipo do veículo anfíbio
 */
string VeiculoAnfibio::getTipo() {
    return tipoAnfibio;
}

/**
 * @brief Modifica o tipo do veículo anfíbio
 * @param tipo Especificação do tipo do veículo anfíbio
 */
void VeiculoAnfibio::setTipo(string tipo) {
    tipoAnfibio = tipo;
}

/**
 * @brief Retorna a informação se o veículo anfíbio é blindado
 * @return true Se o veículo for blindado
 * @return false Se o veículo não for blindado
 */
bool VeiculoAnfibio::isBlindado() {
    return blindado;
}

/**
 * @brief Modifica o status de blindagem do veículo anfíbio
 * @param bld Status de blindagem do veículo (verdadeiro ou falso)
 */
void VeiculoAnfibio::setBlindado(bool bld) {
    blindado = bld;
}