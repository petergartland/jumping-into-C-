#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

struct EnemyShip
{
	int x_coord;
	int y_coord;
	int wep_power;
	EnemyShip* next_enemy;
};

EnemyShip* p_enemies;

EnemyShip* getNewEnemy(EnemyShip* enemy_list)
{
	EnemyShip* enemy = new EnemyShip;
	enemy->x_coord = 0;
	enemy->y_coord = 0;
	enemy->wep_power = 10;
	enemy->next_enemy = enemy_list;
	return enemy;
}

EnemyShip* addNewEnemy(EnemyShip* enemy_list)
{
	EnemyShip* enemy = new EnemyShip;
	enemy->x_coord = 0;
	enemy->y_coord = 0;
	enemy->wep_power = 10;
	enemy->next_enemy = enemy_list;
	return enemy;
}


void upgradeWep (EnemyShip* enemy)
{
	enemy->wep_power += 10;
}



int main()
{
	EnemyShip* list = NULL;
	list = getNewEnemy(list);
	cout<<list->wep_power<<endl;
	upgradeWep(list);
	cout<<list->wep_power<<endl;
}
