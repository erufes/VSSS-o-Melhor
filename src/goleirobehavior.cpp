/*
 * goleirobehavior.cpp
 *
 *  Created on: 10 de dez de 2018
 *      Author: ERUS
 */

#include "goleirobehavior.h"
#include "world.h"
#include "campo.h"
#include <cmath>
#include <iostream>

namespace vsssERUS{

	GoleiroBehavior::GoleiroBehavior() {

	}

	Ponto GoleiroBehavior::movimenta(Ponto posicao, World* mundo){
		/* Ideia da implementação :
		 * 	Posicionar o robô de forma que ele impessa a trajetória da bola
		 * 		Como : 	Calcular o angulo de abertura entre a bola e o gol
		 * 				Posicionar o robô onde o "triangulo" tenha base de 7,5 (tamanho do robô)
		 */

		//TODO: testar GoleiroBehavior::movimenta
		Ponto ballPosition = (mundo->getBall()->getPosicao());
		/* a² = b² + c² - 2bc*cos α
		 * a² - b² - c² = -2bc* cos α
		 * (b² + c² - a²)/2bc = cos α
		 * α = acos(((b² + c² - a²)/2bc))
		 * Onde : 
		 * 	a <- lado oposto (tamanho do gol)
		 * 	b e c <- lados adjascentes (distancia da bola até um dos limites do gol)
		 * 	α <- angulo desejado
		 */
		pair<Ponto, Ponto> gol = mundo->getCampo()->getGolAliado();
		float a = gol.first.distancia(gol.second),
			b = gol.first.distancia(ballPosition),
			c = gol.second.distancia(ballPosition),
			alfa = acos((b*b + c*c - a*a)/(2*b*c));
		
		/* x = ball.x
		 * y = ball.y - dy
		 * dy = 3.75/tan(α/2)
		 */
		float x = ballPosition.getX(),
			y = ballPosition.getY(),
			dx = 3.75/tan(alfa);
		Ponto resp(x,y);

		// Ajusta a posição Horizontal
		if(y > 100)
			resp.setY(100);
		else if (y < 30)
			resp.setY(30);

		// Ajusta a posição Vertical
		if (mundo->getCampo()->getLado() == Campo::Lado::Esquerda){
			resp.setX(x -= dx);
			if (x > 37.5){
				resp.setX(10);
				resp.setY(65);
			}
		}else{
			resp.setX(x += dx);
			if (x < 112.5){
				resp.setX(150);
				resp.setY(65);
			}
		}
		return resp;
	}

	std::pair<int,int> GoleiroBehavior::controle(Ponto posicao, World* mundo){
		//TODO: implementar GoleiroBehavior::controle
		return std::pair<int,int>();
	}

	std::pair<int,int> GoleiroBehavior::evitarColisaoEntreJogadores(Ponto posicao, World* mundo) {
		return std::pair<int, int>();
	}

	std::pair<int,int> GoleiroBehavior::sairDaParede(Ponto posicao, World* mundo) {
		return std::pair<int, int>();
	}
}
