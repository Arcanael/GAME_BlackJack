#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Hand.h"
#include "GenericPlayer.h"

//������
class Deck : public Hand
{
public:
	Deck();

	virtual ~Deck();

	// ������� ����������� ������ �� 52 ����
	void Populate();

	// ������ �����
	void Shuffle();

	// ������� ���� ����� � ����
	void Deal(Hand& aHand);

	// ���� �������������� ����� ������
	void AdditionalCards(GenericPlayer& aGenericPlayer);
};