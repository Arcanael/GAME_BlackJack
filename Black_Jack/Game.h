#pragma once
#include <iostream>
#include <vector>

using namespace std;

#include "Deck.h"
#include "Player.h"
#include "House.h"

//Игра
class Game
{
public:
	Game(const vector<string>& names);

	~Game();

	// проводит игру в Blackjack
	void Play();

private:
	Deck m_Deck;
	House m_House;
	vector<Player> m_Players;
};