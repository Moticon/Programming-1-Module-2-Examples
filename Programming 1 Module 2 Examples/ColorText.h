#pragma once
// This is a dedicated file to the console class. It only 
// has what it needs in order to be easier to port. It contains
// all its own includes and shares nothing with the main

// include this header in your generic header. 
#include <iostream>
#include <Windows.h>
using namespace std;

enum COLORS {
    Black, DarkBlue, ForestGreen, Blue, DarkRed, LightPurple, Gold, LightGrey, DarkGrey,
    SkyBlue, Green, LightBlue, Red, Purple, Yellow, White
};

const int Background = 16;

class ColorText {
private:
    int foreground;
    int background;
    int combinedColor;
    HANDLE consoleHandle;
public:
    ColorText() {
        setColors(White, Black);
        consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    }

    ColorText(int foreground, int background) {
        setColors(foreground, background);
        consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    }

    void setColors(int fore, int back) {
        foreground = fore;
        background = back;
        // there is one number for the color combination
        // this number is the background *16 + the foreground color
        // so if background is Blue (3) and foreground is yellow (14)
        // then the combined color is 14 + 3*16 = 62. 
        combinedColor = foreground + Background * background;
        SetConsoleTextAttribute(consoleHandle, combinedColor);
    }

    // this function will probably not be used.. remove later after testing. 
    void setScreenColor() {
        SetConsoleTextAttribute(consoleHandle, combinedColor);
    }
};
