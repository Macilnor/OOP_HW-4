#pragma once

enum Suit {
	S_HEARTS,
	S_TILES,
	S_CLOVERS,
	S_PIKES
};

enum Rank {
	R_ACE = 1,
	R_TWO = 2,
	R_THREE = 3,
	R_FOUR = 4,
	R_FIVE = 5,
	R_SIX = 6,
	R_SEVEN = 7,
	R_EIGHT = 8,
	R_NINE = 9,
	R_TEN = 10,
	R_JACK = 10,
	R_QUEEN = 10,
	R_KING = 10,
};

class Card
{
private:
	Suit m_Suit;
	Rank m_Rank;
	bool m_faceUp;
public:
	Card(Suit suite, Rank rank, bool flipUp);
	void Flip();
	int getValue() const;

};
