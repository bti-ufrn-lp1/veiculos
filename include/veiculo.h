/**
 * @file    veiculo.h
 * @brief   Definição da classe Veiculo
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 */

#ifndef VEICULO_H
#define VEICULO_H

#include <string>
using std::string;

/**
 * @class Veiculo veiculo.h "include/veiculo.h"
 * @brief Classe que representa um veículo
 */
class Veiculo {
    protected:

    /** @brief Fabricante do veículo */
    string fabricante;

    /** @brief Modelo do veóculo */
    string modelo;

    /** @brief Ano de fabricação do veículo */
    short ano;

    /** @brief Cor do veículo */
    string cor;

    /** @brief Placa do veículo */
    string placa;

    public:

    /** @brief Construtor padrão */
    Veiculo();

    /**
     * @brief Construtor parametrizado
     * @param fab Fabricante do veículo
     * @param mod Modelo do veículo
     * @param a Ano de fabricação do veículo
     * @param c Cor do veículo
     * @param pl Placa do veículo
     */
    Veiculo(string fab, string mod, short a, string c, string pl);

    /**
     * @brief Retorna o fabricante do veículo
     * @return Nome do fabricante do veículo
     */
    string getFabricante();

    /**
     * @brief Modifica o fabricante do veículo
     * @param fab Nome a ser atribuído ao fabricante do veículo
     */
    void setFabricante(string fab);

    /**
     * @brief Retorna o modelo do veículo
     * @return Nome do modelo do veículo
     */
    string getModelo();

    /**
     * @brief Modifica o modelo do veículo
     * @param mod Nome a ser atribuído ao modelo do veículo
     */
    void setModelo(string mod);

    /**
     * @brief Retorna o ano de fabricação do veículo
     * @return Ano de fabricação do veículo
     */
    short getAno();

    /**
     * @brief Modifica o ano de fabricação do veículo
     * @param a Valor a ser atribuído ao ano de fabricação do veículo
     */
    void setAno(short a);

    /**
     * @brief Retorna a cor do veículo
     * @return Cor do veículo
     */
    string getCor();
    
    /**
     * @brief Modifica a cor do veículo
     * @param c Descrição a ser atribuída à cor do veículo
     */
    void setCor(string c);

    /**
     * @brief Retorna a placa do veículo
     * @return Identificação da placa do veículo
     */
    string getPlaca();
    
    /**
     * @brief Modifica a placa do veículo
     * @param pl Identificação a ser atribuída à placa do veículo
     */
    void setPlaca(string pl);

    /** @brief Aciona o veículo */
    void ligar();

    /** @brief Indica a movimentação do veículo */
    void mover();

    /** @brief Aciona a parada do veículo */
    void parar();

    /**
     * @brief Retorna uma representação em string do veículo
     * @return String contendo o nome do fabricante, o nome do modelo e 
     *         a identificação de placa do veículo
     */
    string toString();
};

#endif