#pragma once

class Stats{
private:
	int good = 0;
	int bad = 0;
	int neutral = 0;
	int coins = 0;
public:
	void getStats();
	int getGood();
	int getBad();
	int getNeutral();
	int getCoins();

	void setGood(int newGood);
	void setBad(int newBad);
	void setNeutral(int newNeutral);
	void setCoins(int newCoins);

};


