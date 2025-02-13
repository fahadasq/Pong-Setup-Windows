#include <iostream>
#include <raylib.h>

int main()
{
	InitWindow(1280, 720, "Pong");
	printf("Hello World, edited with notepad");

	while (!WindowShouldClose())
	{
		ClearBackground(BLACK);
		BeginDrawing();
		EndDrawing();
	}
}
