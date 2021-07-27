#pragma once
#include <iostream>
using namespace std;

#include "GenericPlayer.h"

//������
class House : public GenericPlayer
{
public:
	House(const string& name = "House");

	/*virtual ~House();*/
	~House();

	virtual bool IsHitting() const;

	//������ ���������� ���� 1 �����
	void FlipFirstCard();
};