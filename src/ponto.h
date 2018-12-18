//tstado!! Selo Valdino de Garantia \0/
//Nota: ponto s� salva 5 casas decimais
#ifndef PONTO_H
#define PONTO_H
/* Nome do m�dulo: Ponto
 * Ano de cria��o: 2018/10
 * Descri��o do m�dulo: Cria��os dos pontos
 * Vers�o: 1.0
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
    //Cr�ditos � professora Cl�udia Galarda Varassin pela cria��o da fun��o que foi poucamente modificada para atender � nossos anseios
    static vector<double> resolucaoDeSistemaLinear(double** matrix, double* vetor, int N);
};

#endif // PONTO_H
