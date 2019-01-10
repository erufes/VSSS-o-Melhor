#ifndef CAMPO_H
#define CAMPO_H

#include "teamplayer.h"
#include <cstdio>
#include <cstdlib>

class TeamPlayer;



class Campo
{
	/* Nome do m�dulo: Limite
	 * Ano de cria��o: 2018/10
	 * Descri��o do m�dulo: Cria��o dos lados do campo
	 * Vers�o: 1.1
	 * tstado!! Selo Valdino de Garantia \0/
	 * Pr�-requisitos: Pontos distintos
	 * Membros: Ricardo Ramos, Gabriel Valdino
	 */

	class Limite
	{
	    Ponto ponto1;
	    Ponto ponto2;
	public:
	    Limite(Ponto p1 = Ponto(0,0), Ponto p2 = Ponto(0,0));
	    Ponto pontoMedio();
	    double distancia();
	    double distanciaParaOutroLimite(Limite outro);
	    Ponto returnPonto(int x);
	};

	enum Lado{Esquerdo, Direito};

    Limite limiteSuperior;
    Limite limiteInferior;
    Limite golDireito;
    Limite golEsquerdo;
    Limite limiteDireito;
    Limite limiteEsquerdo;
    Lado nossoLado;

public:
    Campo(char* campo);
    bool estaDentroDoCampo(Ponto posicao);
    double campoPotencial(TeamPlayer jogador);
    void atualizarCampo(char* campo);

    Lado getLado(){
    	return this->nossoLado;
    }

    int getBordaSuperior();
	int getBordaInferior();
	int getBordaEsquerda();
	int getBordaDireita();

    Ponto getMeioDeCampo();
    Ponto getMeioDeGolAliado();
    Ponto getMeioDeGolInimigo();

};

#endif // CAMPO_H
