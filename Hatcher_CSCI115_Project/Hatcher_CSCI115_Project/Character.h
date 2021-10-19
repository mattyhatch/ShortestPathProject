#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H


//Used to represent the character on the board
class Character
{
private:
	char symbol; //The symbol used to represent your character
	char space; //The space that the character is on according to the map
	int x; //current x position of the character
	int y; //current y position of the character
public:
	//Default constructor
	Character()
	{
		symbol = 'C';  // Default symbol for the character
		space = 'F';  //The character will always start on a forest square on the board 
		y = 0;
		x = 0;
	}
	//Default constructor with parameters included
	Character(char symbol1, char space1, int x1, int y1)
	{
		symbol = symbol1;
		space = space1;
		x = x1;
		y = y1;
	}
	~Character()
	{
		//Default deconstructor
	}
	//Setter function for char symbol
	void setSymbol(char symbol1) { symbol = symbol1; }
	//Setter function for char space
	void setSpace(char space1) { space = space1; }
	//Setter function for int x
	void setXIndex(int index1) { x = index1; }
	//Setter function for int y
	void setYIndex(int index1) { y = index1; }
	//Getter function for int x
	int getXIndex() { return x; }
	//Getter function for int y
	int getYIndex() { return y; }
	//Getter functtion for char symbol
	char getSymbol() { return symbol; }
	//Getter function for char space
	char getSpace() { return space; }
};


#endif CHARACTER_H