#include "Hacks.h"

Process pro;
DWORD cHacks::proc = NULL,
	  cHacks::CShell = NULL;

struct Signatures
{
	
}Sig;


void cHacks::Start()
{
	Prepare();
	while (true)
	{
		Stuff();
		Sleep(10);
	}
}

bool cHacks::Prepare()
{
	while (!proc && !CShell)
	{
		proc = pro.getProcess("crossfire.dat");
		CShell = pro.getModule(proc,"CShell.dll");
	}
	return true;
}

void cHacks::Stuff()
{
	
}

