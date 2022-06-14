/**
 * @file    barco.h
 * @brief   Definição da classe Barco
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 */

#ifndef BARCO_H
#define BARCO_H

#include <string>
using std::string;

/**
 * @class Barco barco.h "include/barco.h"
 * @brief Classe que representa um barco
 */
class Barco {
    protected:

    /** @brief Velocidade média do barco, em quilômetros por hora */
    float velocidade;

    public:

    /** @brief Construtor padrão */
    Barco();
    
    /**
     * @brief Construtor parametrizado
     * @param v Valor da velocidade média do barco
     */
    Barco(float v);

    /**
     * @brief Retorna a velocidade média do barco
     * @return Valor da velocidade média do barco
     */
    float getVelocidade();

    /**
     * @brief Modifica o valor da velocidade média do barco
     * @param v Valor a ser atribuído à velocidade média
     */
    void setVelocidade(float v);

    /** @brief Aciona o barco  */
    void ligar();

    /** @brief Indica a movimentação do barco */
    void mover();

    /** @brief Aciona a parada do barco */
    void parar();
};

#endif