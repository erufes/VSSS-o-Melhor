//Observa��o: predicao_adaptativa(double x) n�o foi testado pois est� incompleto

#ifndef AGENT_H
#define AGENT_H

/* Nome: Agente
 * Ano de cria��o: 2018/10
 * Descri��o do m�dulo: Representa objetos no campo (bola, jogadores, etc..), clase abstrata que reune informa��es desses objeto e abstrai o tipo de objeto que se trata.
 * Vers�o: 1.1
 * testado!! Selo Valdino de Garantia \0/
 * Pr�-requisitos: NULL
 * Membros: Ricardo Ramos, Gabriel Valdino
 */

#include "ponto.h"
#include <vector>

using namespace std;

class Agent
{
    Ponto posicao;
    vector<Ponto> old;
public:
    Agent(double x = 0, double y = 0);
    Agent(Ponto ponto);
    virtual ~Agent(){};
    vector<Ponto> getxy_old();
    virtual std::pair<double, double> previsaoDePosicao(Ponto ponto_atual, vector<Ponto> vetor_funcao);
    virtual std::pair<double, double> previsaoDePosicao() = 0;
    void update_position(double x, double y);
    void update_position(Ponto ponto);
    Ponto getPonto();

private:
    double** ajusteDeCurva(vector<Ponto> vet, int grau);
};

#endif // AGENT_H
