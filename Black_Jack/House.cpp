#include <iostream>
using namespace std;

#include "House.h"


House ::~House() {}

House::House(const string& name) : GenericPlayer(name)
{}

bool House::IsHitting() const
{
	return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
	if (!(m_Cards.empty()))
	{
		m_Cards[0]->Flip();
	}
	else
	{
		cout << "No card to flip!\n";
	}
}
