#pragma once
#include <vector>
#include <string>

using namespace std;


//hangman

class WordBank {
private:
	vector<string> bank;
	string lastWord;
public:
	WordBank();
	string getWord();
};

class Hang {
private:
	string word, display;
	int guess;
	int hcoin;
	WordBank bank;
	bool conti;
public:
	void runHang();
};


//tic tac toe


class Player {
public:
	Player(char v);
	Player() {}

	char getKey();
	int getWins();
	int getLosses();
	int getGames();

	void win();
	void lose();
	void draw();
private:
	char key;
	int wins;
	int losses;
	int games;
};

class Map {
private:
	char grid[3][3];
public:
	Map();
	void setKey(Player p, int x, int y);
	bool hasWon(Player p);
	bool draw();
	void reset();
	void display();
};

class Tac {
private:
	Player players[2];
	Map map;
	int tcoin;
	bool conti;
public:
	Tac();
	void run();
};

