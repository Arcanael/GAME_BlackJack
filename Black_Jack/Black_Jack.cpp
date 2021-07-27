#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

#include "Card.h"
#include "Hand.h"
#include "GenericPlayer.h"
#include "House.h"
#include "Player.h"
#include "Deck.h"
#include "Game.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<string> names;
	int numplayers;

	//Ввод количества Игроков
	while (true)
	{
		cout << "Введите количество игроков" << endl;
		cin >> numplayers;
		if (numplayers < 1)
		{
			cout << "Вы ввели неверное значение" << endl;
		}
		else
		{
			break;
		}
	}

	//Составление вектора имен Игроков
	string vPlayerName;
	for (int i = 0; i < numplayers; i++)
	{
		cout << "Введите имя " << i + 1 << " игрока " << endl;
		cin >> vPlayerName;
		names.push_back(vPlayerName);
	}

	//Запуск игры 
	Game game = Game(names);
	game.Play();
	while (true)
	{
		cout << "continue the game? (Y/N): ";
		char response;
		cin >> response;
		if (response == 'y' || response == 'Y')
		{
			game.Play();
		}
		else
		{
			break;
		}
	}
}




