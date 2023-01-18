//#include <iostream>
#include <sstream>
//#include <conio.h>
#include <stdlib.h>
//#include <math.h>
#include <time.h>
#include "Shapes.h"
#include "Alphabet.h"
#pragma once

using namespace std;

void Rect(int x, int y, int angle, int length, int height, int red, int green, int blue);

void text(int x, int y, string text, int red, int green, int blue);

const int
//windowwidth = 1366,
//windowheight = 768 - 23 - 2,
pixel = 40,
width = 10,
height = 10,
screenheight = (width + 2) * pixel,
screenwidth = (height + 2) * pixel,
screeny = (windowheight - screenheight) / 2,
screenx = (windowwidth - screenwidth) / 2;

int snake[width * height][2];
int arr[width + 2][height + 2];
int xfruit = (width + 2) / 2;
int yfruit = (height + 2) / 2;

int length = 1;
int dir = 0;
int wait = 10;
bool state = 1;

void pregame() {

	snake[0][0] = (width + 2) / 2;
	snake[0][1] = (height + 2) / 2;

	srand((unsigned int)time(NULL));

	//makes the board empty
	for (int i = 0; i < width + 2; i++) {
		for (int j = 0; j < height + 2; j++) {
			if (i == 0 || i == width + 1 || j == 0 || j == height + 1) {
				arr[i][j] = 0;
			}
			else {
				arr[i][j] = 1;
			}
		}
	}
}

void game( ) {
	if (state == 1) {
		//displays the fruit position
		arr[xfruit][yfruit] = 3;

		//displays the snake position
		for (int i = 0; i < length; i++) {
			arr[snake[i][0]][snake[i][1]] = 2;
		}

		//checks if the snake is on the border
		if (snake[0][0] == 0 || snake[0][0] == width + 1 || snake[0][1] == 0 || snake[0][1] == height + 1) {
			state = 0;
		}

		//checks if snake is on itself
		for (int i = 0; i < length; i++) {
			for (int j = i + 1; j < length; j++) {
				if (snake[i][0] == snake[j][0] && snake[i][1] == snake[j][1]) {
					state = 0;
				}
			}
		}

		//moves the snake
		for (int i = 0; i < length; i++) {
			snake[length - i][0] = snake[length - 1 - i][0];
			snake[length - i][1] = snake[length - 1 - i][1];
		}

		//prints the board
		for (int i = 0; i < width + 2; i++) {
			for (int j = 0; j < height + 2; j++) {
				if (arr[i][j] == 0) {
					Rect(screenx + i * pixel, screeny + j * pixel, 0, pixel, pixel, 126, 100, 100);
				}
				else if (arr[i][j] == 1) {
					Rect(screenx + i * pixel, screeny + j * pixel, 0, pixel, pixel, 0, 0, 0);
				}
				else if (arr[i][j] == 2) {
					Rect(screenx + i * pixel, screeny + j * pixel, 0, pixel, pixel, 0, 127, 0);
				}
				else if (arr[i][j] == 3) {
					Rect(screenx + i * pixel, screeny + j * pixel, 0, pixel, pixel, 127, 0, 0);
				}
			}
		}

		//sets old position to be empty
		arr[snake[length][0]][snake[length][1]] = 1;

		// checks if fruit is eaten
		if (snake[0][0] == xfruit && snake[0][1] == yfruit) {
			for (int i = 0; i < length; i++) {
				while (snake[i][0] == xfruit && snake [i][1] == yfruit){
					xfruit = (rand() % width) + 1;
					yfruit = (rand() % height) + 1;
					
				}
			}
			length++;
		}

		/*
		stringstream ss;
		ss << length;
		string str = ss.str();
		*/

		

		//displays the score
		auto s = to_string(length);
		text(screenx, windowheight - 50, "score: ", 127, 0, 0);
		text(screenx + 70, windowheight - 50, s, 127, 0, 0);
		//cout << endl << "Score" << length;

		//changes positiion
		if (dir == 0) {
			snake[0][1]++;
		}
		else if (dir == 1) {
			snake[0][0]++;
		}
		else if (dir == 2) {
			snake[0][1]--;
		}
		else if (dir == 3) {
			snake[0][0]--;
		}
	}
	//resets the board
	else {
	
		auto s = to_string(length);
		
		text(windowwidth / 2 - 70, windowheight / 2, "your score: ", 127, 0, 0);
		text(windowwidth / 2 + 70, windowheight / 2, s, 127, 0, 0);

		text(windowwidth / 2 - 130, windowheight / 2 - 200, "To play again press: R", 127, 0, 0);
		text(windowwidth / 2 - 90, windowheight / 2 - 300, "To quit press: Q", 127, 0, 0);


		xfruit = (width + 2) / 2;
		yfruit = (height + 2) / 2;
		
		dir = 0;

		snake[0][0] = (width + 2) / 2;
		snake[0][1] = (height + 2) / 2;

		srand((unsigned int)time(NULL));

		for (int i = 0; i < width + 2; i++) {
			for (int j = 0; j < height + 2; j++) {
				if (i == 0 || i == width + 1 || j == 0 || j == height + 1) {
					arr[i][j] = 0;
				}
				else {
					arr[i][j] = 1;
				}
			}
		}

		
	}
}
