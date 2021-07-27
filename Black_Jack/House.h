#pragma once
#include <iostream>
using namespace std;

#include "GenericPlayer.h"

//Диллер
class House : public GenericPlayer
{
public:
	House(const string& name = "House");

	/*virtual ~House();*/
	~House();

	virtual bool IsHitting() const;

	//Диллер раскрывает свою 1 Карту
	void FlipFirstCard();
};