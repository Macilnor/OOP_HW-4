#pragma once
#include <vector>
#include <iostream>
#include "Card.h"

using namespace std;

class Hand
{
private:
	vector<Card*> m_Cards;
public:
	Hand();

	void Add(Card* pCard);
	void Clear();
	int GetTotal();
	
	~Hand();
};

