/*
 * world.h
 *
 *  Created on: 2 de jan de 2019
 *      Author: ERUS
 */

#ifndef WORLD_H_
#define WORLD_H_
#include "ball.h"
#include "enemy.h"
#include "campo.h"

/* Nome do m�dulo: World
 * Ano de cria��o: 2019/01
 * Descri��o do m�dulo: Classe que representa o mundo, contendo cada componete que exite. Criado para facilitar armazenamento e passagem de par�metros.
 * Vers�o: 1.0
 * Pr�-requisitos componentes do mundo existentes
 * Membros: Ricardo Ramos
 */
class World {
	Ball bola;
	vector<TeamPlayer> jogadores;
	vector<Enemy> inimigos;
	Campo campo;
public:
	World(Campo campo, vector<TeamPlayer> jogadores, vector<Enemy> inimigos, Ball bola);
	virtual ~World();
	void setBall(Ball bola);
	Ball getBall();
	void setTeamPlayer(vector<TeamPlayer> jogadores);
	vector<TeamPlayer> getTeamPlayer();
	void setEnemy(vector<Enemy> inimigos);
	vector<Enemy> getEnemy();
	void setCampo(Campo campo);
	Campo getCampo();
};

#endif /* WORLD_H_ */
