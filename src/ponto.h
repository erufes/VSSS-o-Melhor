//tstado!! Selo Valdino de Garantia \0/
//Nota: ponto s� salva 5 casas decimais

#ifndef PONTO_H
#define PONTO_H
/* Nome do m�dulo: Ponto
 * Ano de cria��o: 2018/10
 * Descri��o do m�dulo: Cria��o dos pontos mais uma fun��o extra para resolver sistemas lineares de ordem N
 * Vers�o: 1.1
 * Pr�-requisitos: Coordenadas dos pontos n�o negativas
 * Membros: Ricardo Ramos, Gabriel Valdino
 */
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

class Ponto
{
    double x;
    double y;
public:
    Ponto(double x = 0, double y = 0);
    double distancia(Ponto outro);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);

    //Resolu��o do sistema Ax = b, sendo A = matrix, b = vetor, N = ordem de matrix
    //Aten��o � chamada da fun��o, pois ela precisa de um "double** A" e n�o um "double A[N][N]", logo, � necess�rio o uso de mallocs
    //Cr�ditos � professora Cl�udia Galarda Varassin pela cria��o da fun��o que foi poucamente modificada para atender � nossos anseios
    static vector<double> resolucaoDeSistemaLinear(double** matrix, double* vetor, int N);
};

#endif // PONTO_H
