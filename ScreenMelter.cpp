// stadfx.h comes with visual studio remove if unnecessary
#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <wingdi.h>

int main() {
	// If you don't want the console use this, else just remove this line
	FreeConsole();

	// Get screen stats
	HDC dcD = GetWindowDC(NULL);
	int width = GetSystemMetrics(SM_CXSCREEN);
	int height = GetSystemMetrics(SM_CYSCREEN);

	// Seed random number generator
	srand(GetTickCount());

	while (true)
	{
		// Random x coordinate
		int x = rand() % width;
		BitBlt(dcD, x, 20, 50, height, dcD, x, 0, SRCCOPY);
	}

	return 0;
}
