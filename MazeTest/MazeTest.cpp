// MazeTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;


int screenW = 120;
int screenH = 40;


float playerXPOS = 0.0f;
float playerYPOS = 0.0f;

float playerLookAngle = 0.0f;

int mapH = 20;
int mapW = 20;

float playerFOV = 3.1415926f / 3;




int main()
{
	wchar_t* screen = new wchar_t[screenH*screenW];
	HANDLE console = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE ,0,NULL,CONSOLE_TEXTMODE_BUFFER,NULL);
	SetConsoleActiveScreenBuffer(screen);
	DWORD bytesWritten = 0;



	wstring currentMAP;
	currentMAP += L"********************";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*.....*****........*";
	currentMAP += L"*.....*****........*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..........*****...*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"*..................*";
	currentMAP += L"********************";


	while (bool gameIsRunning = true) {
	

		for (int x = 0; x < screenW; x++)
		{
			float rayAngle = (playerLookAngle - playerFOV / 2) + ((float)x / screenW) * playerFOV;

			float dis2Wall = 0.0f;
			bool hitWall = false;
			while (!hitWall)
			{
				dis2Wall += 0.1f;
			}
		}
	
	
		screen[screenW * screenH - 1] = '\0';
		WriteConsoleOutputCharacter(console, screen, screenW * screenH, { 0,0 }, &bytesWritten);
	}


	

    /*std::cout << "Hello World!\n";*/

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
