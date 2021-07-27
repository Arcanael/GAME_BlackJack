#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Hand.h"

// Абстрактный класс для Диллера И Игрока
class GenericPlayer : public Hand
{	//Перегрузка оператора вывода на для вывода Игрока на экран
	friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

public:
	GenericPlayer(const string& name = "");

	virtual ~GenericPlayer();

	virtual bool IsHitting() const = 0;
	//Проверка на перебор (>21)
	bool IsBusted() const;
	//Вывод на экран Игрока с перебором
	void Bust() const;

protected:
	//Имя Игрока или Диллер
	string m_Name;
};