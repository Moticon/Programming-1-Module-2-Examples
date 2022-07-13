#pragma once
#include <iostream>
#include <cstdlib>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include "ColorText.h"
using namespace std;

const string DOUBLE_ENDLINE = "\n\n";

char getMenuChoice(string prompt, bool clearWindow);
void clearScreen();
void pressAKeyToContinue(bool clearWindow);

// Example functions
void setWidth();
void leftAndRight();
void liningUpDollars();
void readSingleChars();
