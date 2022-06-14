/**
 * @file    anfibio.h
 * @brief   Definição da classe Carro
 * @details A classe VeiculoAnfibio é construída como uma herança múltipla das
 *          classes Veiculo e Barco
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   13/06/2022
 * @date    13/06/2022
 * @sa      veiculo.h
 * @sa      barco.h
 */

#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <string>
using std::string;

#include "barco.h"
#include "veiculo.h"

/**
 * @class VeiculoAnfibio anfibio.h "include/anfibio.h"
 * @brief Classe que representa um veículo anfíbio
 * @details A classe VeiculoAnfibio é construída como uma herança múltipla das classes
 *          Veiculo e Barco
 */
class VeiculoAnfibio : public Veiculo, public Barco {
    private:

    /** @brief Tipo do veículo anfíbio */
    string tipoAnfibio;

    /** @brief Indica se o veículo anfíbio é blindado ou não */
    bool blindado;

    public:
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
     VeiculoAnfibio(string fab, string mod, short a, string c, string pl,
                    float v, string tipo, bool isBlindado);

     /**
      * @brief Retorna o tipo do veículo anfíbio
      * @return Tipo do veículo anfíbio
      */
     string getTipo();

     /**
      * @brief Modifica o tipo do veículo anfíbio
      * @param tipo Especificação do tipo do veículo anfíbio
      */
     void setTipo(string tipo);

     /**
      * @brief Retorna a informação se o veículo anfíbio é blindado
      * @return true Se o veículo for blindado
      * @return false Se o veículo não for blindado
      */
     bool isBlindado();

     /**
      * @brief Modifica o status de blindagem do veículo anfíbio
      * @param bld Status de blindagem do veículo (verdadeiro ou falso)
      */
     void setBlindado(bool bld);
};

#endif