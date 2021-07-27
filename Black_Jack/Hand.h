#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Card.h"

//Рука с картами
class Hand
{
public:
	Hand();

	virtual ~Hand();

	//Добавить Карту в руку
	void Add(Card* pCard);

	//Сброс Карт(удаление указателей из вектора и очистка его)
	void Clear();

	//Подсчет суммы Карт на руке
	int GetTotal() const;

protected:
	//Вектор указателей на Карты которые находятся в руке
	vector<Card*> m_Cards;
};