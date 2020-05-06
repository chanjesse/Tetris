#include <iostream>

using namespace std;

//resources
//https://www.youtube.com/watch?v=8OK8_tHeCIA
//https://github.com/OneLoneCoder/videos/blob/master/OneLoneCoder_Tetris.cpp
//http://javilop.com/gamedev/tetris-tutorial-in-c-platform-independent-focused-in-game-logic-for-beginners/

wstring tetromino[7];


int main()
{
    //Creating assets
    //Shape #1
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    //Shape #2
    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L"..X.");
    tetromino[1].append(L"....");

    //Shape #3
    tetromino[2].append(L"....");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"....");

    //Shape #4
    tetromino[3].append(L"..X.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".X..");
    tetromino[3].append(L"....");

    //Shape #5
    tetromino[4].append(L".X..");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    //Shape #6
    tetromino[5].append(L".X..");
    tetromino[5].append(L".X..");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"....");

    //Shape #7
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L".XX.");
    tetromino[0].append(L"....");










    return 0;
}