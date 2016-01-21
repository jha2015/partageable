// Composant2.cpp : Defines the routines for the DLL.
//

#include "Composant3.h"
#include "Composant3Version.h"
int composant3(int p1, int p2)
{
	return p1*p2;
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}

char * getComposant3Version()
{
	return "Composant 3 version " COMPOSANT_VERSION_STR;
}

