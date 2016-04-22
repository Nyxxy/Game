#include "Stats.h"
#include <iostream>

using namespace std;

void Stats::getStats(){
	cout << "Good: " << getGood() << endl;
	cout << "Bad: " << getBad() << endl; 
	cout << "Neutral: " << getNeutral() << endl;
	cout << "Coins: " << getCoins() << endl;
}
int Stats::getGood(){
	return good;
}
int Stats::getBad(){
	return bad;
}
int Stats::getNeutral(){
	return neutral;
}
int Stats::getCoins(){
	return coins;
}

void Stats::setGood(int newGood){
	good = good + newGood;
}
void Stats::setBad(int newBad){
	bad = bad + newBad;
}
void Stats::setNeutral(int newNeutral){
	neutral = neutral + newNeutral;
}
void Stats::setCoins(int newCoins){
	coins = coins + newCoins;
}