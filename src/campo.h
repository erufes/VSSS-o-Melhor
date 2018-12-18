#ifndef CAMPO_H
#define CAMPO_H

#include "teamplayer.h"
#include <cstdio>
#include <cstdlib>

class Campo
{
	/* Nome do m�dulo: Lado
	 * Ano de cria��o: 2018/10
	 * Descri��o do m�dulo: Cria��o dos lados do campo
	 * Vers�o: 1.1
	 * tstado!! Selo Valdino de Garantia \0/
	 * Pr�-requisitos: Pontos distintos
	 * Membros: Ricardo Ramos, Gabriel Valdino
	 */
	class Lado
	{
	    Ponto ponto1;
	    Ponto ponto2;
	public:
	    Lado(Ponto p1 = Ponto(0,0), Ponto p2 = Ponto(0,0));
	    Ponto pontoMedio();
	    double distancia();
	    double distanciaParaOutroLado(Lado outro);
	    Ponto returnPonto(int x);
	};

    Lado limiteSuperior;
    Lado limiteInferior;
    Lado golDireito;
    Lado golEsquerdo;
    Lado limiteDireito;
    Lado limiteEsquerdo;
public:
    Campo(char* campo);
    bool estaDentroDoCampo(Ponto posicao);
    double campoPotencial(TeamPlayer jogador);
    void atualizarCampo(char* campo);
};

#endif // CAMPO_H
