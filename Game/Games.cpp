#include "Games.h"
#include <ctime>
#include <iostream>

//Game Menu
/*int gameMenu::getGames(){
	cout << "1. Hangman" << endl;
	cout << "2. Tic Tac Toe  (Two Players)" << endl;
	int s;
	cin >> s;
	return s;
}

void gameMenu::runGames(){

}

*/

//Hang

void Hang::runHang() {
	do {
		hcoin = 0;
		guess = 0;
		word = bank.getWord();
		display = word;

		char letter;

		for (int i = 0; i < display.length(); i++) {
			display[i] = '_';
		}

		do {
			for (int i = 0; i < display.length(); i++) {
				cout << display[i] << " ";
			}
			cout << endl;

			cout << "Guesses remaining: " << 6 - guess << endl;

			cout << "Make a guess: ";
			cin >> letter;

			bool found = false;
			for (int i = 0; i < display.length(); i++) {
				if (word[i] == letter) {
					found = true;
					display[i] = letter;
				}
			}

			if (!found) {
				cout << "Incorrect!" << endl;
				guess++;
			}

		} while (guess < 6 && display != word);

		if (display != word) {
			cout << "Game over" << endl;
			cout << "The word is " << word << endl;
		}
		else {
			cout << "You won!" << endl;
			hcoin = hcoin + 5;
		}


		cout << "Continue [y/n]? ";
		cin >> letter;
		if (letter == 'y') {
			conti = true;
		}
		else {
			conti = false;
		}

	} while (conti);
}


//wordbank

WordBank::WordBank() {
	lastWord = "";
	srand(time(0));
	bank.push_back("hell");
	bank.push_back("demon");
	bank.push_back("inferno");
	bank.push_back("nightmare");
	bank.push_back("death");
	bank.push_back("satan");
	bank.push_back("devil");
	bank.push_back("kingsley");
	bank.push_back("fight");
	bank.push_back("you");
	bank.push_back("hellhound");
	bank.push_back("bat");
	bank.push_back("familiar");
	bank.push_back("abyss");
	bank.push_back("void");
	bank.push_back("fire");
	bank.push_back("eternal");
	bank.push_back("escape");
	bank.push_back("school");
	bank.push_back("homework");
	bank.push_back("angel");
	bank.push_back("torture");
	bank.push_back("doomed");
	bank.push_back("forever");
	bank.push_back("gay");
	bank.push_back("sin");
	bank.push_back("sinner");
	bank.push_back("cheater");
	bank.push_back("grammar");
	bank.push_back("abomination");
	bank.push_back("exam");
	bank.push_back("blasphemy");
	bank.push_back("contrition");
	bank.push_back("damnaion");
	bank.push_back("math");
	bank.push_back("murder");
	bank.push_back("hades");
	bank.push_back("limbo");
	bank.push_back("grave");
	bank.push_back("brimstone");
	bank.push_back("infernal");
	bank.push_back("pit");
	bank.push_back("hellish");
	bank.push_back("hot");
	bank.push_back("sweat");
	bank.push_back("martyrdom");
	bank.push_back("agony");
	bank.push_back("suffering");
	bank.push_back("persecution");
	bank.push_back("kill");
	bank.push_back("slow");
	bank.push_back("buffering");
	bank.push_back("party");
	bank.push_back("stress");
	bank.push_back("quagmire");
	bank.push_back("night");
	bank.push_back("as");
	bank.push_back("will");
	bank.push_back("babies");
	bank.push_back("evil");
	bank.push_back("cats");
	bank.push_back("movie");
	bank.push_back("history");
	bank.push_back("mathematics");
	bank.push_back("wicked");
	bank.push_back("bad");
	bank.push_back("sinful");
	bank.push_back("foul");
	bank.push_back("corrupt");
	bank.push_back("cruel");
	bank.push_back("villainous");
	bank.push_back("baleful");
	bank.push_back("filthy");
	bank.push_back("vile");
	bank.push_back("nyx");
	bank.push_back("nasty");
	bank.push_back("horrible");
	bank.push_back("noxious");
	bank.push_back("mischievous");
	bank.push_back("pernicious");
	bank.push_back("malignant");
	bank.push_back("fingers");
	bank.push_back("vicious");
	bank.push_back("toes");
	bank.push_back("malicious");
	bank.push_back("ill");
	bank.push_back("immorality");
	bank.push_back("vice");
	bank.push_back("malevolence");
	bank.push_back("barbarity");
	bank.push_back("atrocity");
	bank.push_back("outrage");
	bank.push_back("sorrow");
	bank.push_back("misfortune");
	bank.push_back("shh");
}

string WordBank::getWord() {
	string word = bank[rand() % bank.size()];
	if (word != lastWord) {
		lastWord = word;
		return word;
	}
	else {
		return getWord();
	}
}

//tic tac toe

Tac::Tac() {
	players[0] = Player('X');
	players[1] = Player('O');
}

void Tac::run() {
	int x, y;
		cout << "make sure to grab a friend to play against!" << endl;
	do {
		for (int p = 0; p < 2; p++) {
			map.display();
			cout << "Player " << p + 1 << " pick a position" << endl;
			cout << "x:";
			cin >> x;
			cout << "y:";
			cin >> y;

			map.setKey(players[p], x - 1, y - 1);
			if (map.hasWon(players[p])) {
				cout << "Player " << p + 1 << " wins!!!!" << endl;
				tcoin = tcoin + 5;
				players[p].win();	
				map.reset();
				char letter;

				cout << "Continue [y/n]? ";
				cin >> letter;
				if (letter == 'y') {
				 conti = true;
				}
				else {
				 conti = false;
				}
			}
		
		if (map.draw()) {
			players[0].draw();
			players[1].draw();
			map.reset();
		}
		}			
	} while (conti);
}

Player::Player(char v) {
	key = v;
	wins = 0;
	losses = 0;
	games = 0;
}

char Player::getKey() {
	return key;
}

int Player::getWins() {
	return wins;
}

int Player::getLosses() {
	return losses;
}

int Player::getGames() {
	return games;
}

void Player::win() {
	wins++;
	games++;
}

void Player::lose() {
	losses++;
	games++;
}

void Player::draw() {
	games++;
}

Map::Map() {
	reset();
}

void Map::reset() {
	for (int i = 0; i < 3; i++) {
		for (int g = 0; g < 3; g++) {
			grid[i][g] = '_';
		}
	}
}

void Map::setKey(Player p, int x, int y) {
	grid[x][y] = p.getKey();
}

bool Map::hasWon(Player p) {

	for (int x = 0; x < 3; x++) {
		if (grid[x][0] == p.getKey() &&
			grid[x][1] == p.getKey() &&
			grid[x][2] == p.getKey())
			return true;
	}

	for (int y = 0; y < 3; y++) {
		if (grid[0][y] == p.getKey() &&
			grid[1][y] == p.getKey() &&
			grid[2][y] == p.getKey())
			return true;
	}



	if (grid[0][0] == p.getKey() &&
		grid[1][1] == p.getKey() &&
		grid[2][2] == p.getKey())
		return true;


	if (grid[2][0] == p.getKey() &&
		grid[1][1] == p.getKey() &&
		grid[0][2] == p.getKey())
		return true;

	return false;
}

bool Map::draw() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			if (grid[x][y] != '_') {
				return false;
			}
		}
	}

	return true;
}

void Map::display() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			cout << grid[x][y] << " ";
		}
		cout << endl;
	}
}