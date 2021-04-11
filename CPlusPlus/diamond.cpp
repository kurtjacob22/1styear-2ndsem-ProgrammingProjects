#include <iostream>
#include <conio.h>
#include <windows.h>
#include<unistd.h>

using namespace std;

void gotoxy(int x, int y);
int getScreenSize();
int getScreenSizeHeight();
void setColor(unsigned short color);

// *GLOBAL VARIABLES
int screenWidth = getScreenSize() / 2;
int screenHeight = getScreenSizeHeight() / 2;

int main(){
    system("cls");
    gotoxy(screenWidth, screenHeight);
    cout << "0";
    int diamongLength = 5;
    for(int i = 1; i <= diamongLength; i += 2){
        gotoxy(screenWidth + i, screenHeight);
        cout << "*";
    }

    gotoxy(0,0);
    getch();
}

int getScreenSize(){ //? to get the screen size
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int windowSize;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    windowSize = csbi.srWindow.Right - csbi.srWindow.Left;
    // windowSize / 2 - to center string

    return windowSize;
}

int getScreenSizeHeight(){ //? to get the screen size
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int windowSize;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    windowSize = csbi.srWindow.Bottom - csbi.srWindow.Top;
    // windowSize / 2 - to center string

    return windowSize;
}

void setColor(unsigned short color){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}