#include <iostream>
#include <conio.h>
#include <windows.h>
#include<unistd.h>

using namespace std;

void gotoxy(int x, int y);
int getScreenSize();
void top(int size);
void bottom(int size);
void left(int size);
void right(int size);
int getScreenSizeHeight();
void setColor(unsigned short color);

// *GLOBAL VARIABLES
int screenWidth = getScreenSize() / 2;
int screenHeight = getScreenSizeHeight() / 2;

int main(){
    system("cls");
    
    gotoxy(screenWidth,screenHeight);
    cout << "0";
    int rotate = 0;
    while(true){
        if(rotate == 4){ 
            rotate = 0;
        }
        if(rotate == 0){
            setColor(8);
            top(5);
            setColor(9);
            left(5);
            setColor(10);
            bottom(5);
            setColor(7);
            right(5);
        }else if(rotate == 1){
            setColor(9);
            top(5);
            setColor(10);
            left(5);
            setColor(7);
            bottom(5);
            setColor(8);
            right(5);
        }else if(rotate == 2){
            setColor(10);
            top(5);
            setColor(7);
            left(5);
            setColor(8);
            bottom(5);
            setColor(9);
            right(5);
        }else{
            setColor(7);
            top(5);
            setColor(8);
            left(5);
            setColor(9);
            bottom(5);
            setColor(10);
            right(5);
        }
        sleep(1);
        rotate++;
    }

    gotoxy(0,0);
    getch();
}

void top(int size){
    for(int i = 1; i <= size; i++){
        for( int j = 0; j < i; j++){
            gotoxy(screenWidth + j ,screenHeight - i);
            cout << "*";   
        }     
    }
}

void bottom(int size){
    for(int i = 1; i <= size; i++){
        for( int j = 0; j < i; j++){
            gotoxy(screenWidth - j ,screenHeight + i);
            cout << "*";   
        }     
    }
}

void left(int size){
    for(int i = 1; i <= size; i++){
        for( int j = 0; j < i; j++){
            gotoxy(screenWidth - i ,screenHeight - j);
            cout << "*";   
        }     
    }
}

void right(int size){
    for(int i = 1; i <= size; i++){
        for( int j = 0; j < i; j++){
            gotoxy(screenWidth + i ,screenHeight + j);
            cout << "*";   
        }     
    }
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