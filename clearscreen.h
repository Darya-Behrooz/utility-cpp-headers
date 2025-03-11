// INCLUDE GUARD
#ifndef CLEARSCREEN_H
#define CLEARSCREEN_H

#include <cstdlib>


// OS-INDEPENDENT CLEAR SCREEN
inline void ClearScreen()
{
	// WINDOWS
	#ifdef _WIN32
	system("cls");
	// UNIX
	#else
	system("clear");
	#endif
}


#endif