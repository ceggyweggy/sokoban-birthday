/*
so the idea for this is a sokoban-like game.
hjkl - movement (left, down, up, right)
>< - movement (between levels)
` are boulders, push them into ^ pits 
Yay!
*/

#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <ncurses.h>
#include <stdlib.h>
#include "lib.h"
#include <stdio.h>
using namespace std;

int main() {
	load_level(1);
	system("stty raw");
	while (1) get_input();
}
