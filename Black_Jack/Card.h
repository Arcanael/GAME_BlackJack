#pragma once
#include <iostream>
using namespace std;

//�����
class Card
{
public:
	//�����
	enum suit
	{
		CLUBS,
		SPADES,
		HEARTS,
		DIMONDS
	};
	//��������
	enum rank
	{
		ACE = 1,
		TWO = 2,
		THREE = 3,
		FOUR = 4,
		FIVE = 5,
		SIX = 6,
		SEVEN = 7,
		EIGHT = 8,
		NINE = 9,
		TEN = 10,
		JACK = 10,
		QUEEN = 10,
		KING = 10,

	};

	Card(rank r = ACE, suit s = SPADES, bool ifu = true);
	//�������� �����
	void Flip();
	//��������� �������� �����
	int GetValue() const;

	//���������� ��������� ������ �� ��� ������ ����� �� �����
	friend ostream& operator<<(ostream& os, const Card& aCard);

private:
	rank m_Rank;
	suit m_Suit;
	bool m_IsFaceUp;
};