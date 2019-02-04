#pragma once

namespace Screen
{
	extern wchar_t *screen;
	extern int screenSizeX;			// Console Screen Size X (columns)
	extern int screenSizeY;			// Console Screen Size Y (rows)

	int Get(int x, int y);
	void Set(int x, int y, char value);
}