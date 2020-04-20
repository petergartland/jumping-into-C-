#include <iostream>
#include <string>

using namespace std;

struct spaceship
{
	int x_coord;
	int y_coord;
	string name;
};

struct EnemyShip
{
	int x_coord;
	int y_coord;
	int wep_power;
};

EnemyShip getNewEnemy()
{
	EnemyShip ship;
	ship.x_coord = 0;
	ship.y_coord = 0;
	ship.wep_power = 20;
	return ship;
}

EnemyShip upgradeWep(EnemyShip ship)
{
	ship.wep_power += 10;
	return ship;
}

struct PlayerInfo
{
	int skill_level;
	string name;
};

int main()
{
	spaceship my_ship;
	my_ship.x_coord = 40;
	my_ship.y_coord = 40;
	my_ship.name = "USS Enterprise";
	
	cout<<my_ship.name<<endl<<endl;
	
	PlayerInfo players[5];
	
	for(int i = 0; i < 1; i++)
	{
		cout<<"enter player name\n";
		cin>>players[i].name;
		cout<<"enter " << players[i].name<<"'s skill level\n";
		cin>>players[i].skill_level;
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout<<players[i].name<<" is at skill level "<<players[i].skill_level<<endl;
	}
	cout<<endl;
	EnemyShip ship = getNewEnemy();
	ship = upgradeWep(ship);
	cout<<ship.wep_power<<endl;
	
}
