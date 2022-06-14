/**
 * @file    carro.h
 * @brief   Definição da classe Carro
 * @details A classe Carro é derivada da classe Veiculo
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 * @sa      veiculo.h
 */

#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

#include "veiculo.h"

/**
 * @class Carro carro.h "include/carro.h"
 * @brief Classe que representa um carro
 * @details A classe Carro é derivada da classe Veiculo
 */
class Carro : public Veiculo {
    private:

    /** @brief Volume do porta malas do carro, em litros */
    float volumePortaMalas;

    public:
    
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
     Carro(string fab, string mod, short a, string c, string pl, float vol);

     /**
      * @brief Retorna o volume do porta malas do carro
      * @return Valor do volume do porta malas do carro
      */
     float getVolumePortaMalas();

     /**
      * @brief Modifica o valor do volume do porta malas do carro
      * @param vol Valor a ser atribuído ao volume do porta malas
      */
     void setVolumePortaMalas(float vol);

     /**
      * @brief Aciona o carro
      * @see Veiculo#ligar
      */
     void ligar();

     /**
      * @brief Indica a movimentação do carro
      * @see Veiculo#mover
      */
     void mover();

     /**
      * @brief Aciona a parada do carro
      * @see Veiculo#parar
      */
     void parar();
};

#endif