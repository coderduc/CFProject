#include "Hacks.h"

Process pr;
cHacks cH;

void ConsoleSettings()
{
	SetConsoleTitleA("CProject");
	HANDLE hHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hHandle, 14);
}

int main()
{
	//Settings for console
	ConsoleSettings();
	//Starting cheat
	cH.Start();
	//System
	system("pause");
	return 0;
}