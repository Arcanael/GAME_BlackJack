#pragma once
#include "GenericPlayer.h"

//Игрок
class Player : public GenericPlayer
{
public:
	Player(const string& name = "");

	/*virtual ~Player();*/
	~Player();
	//Запрос на добор Карты Игроку
	virtual bool IsHitting() const;


	void Win() const;


	void Lose() const;

	//Ничья
	void Push() const;
};