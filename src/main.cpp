#include <iostream>
#include <vector>
#include <string>

#include "raylib.h"

using namespace std;

int main() {
   
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "urmom");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            DrawText("Congrats! First window created", screenWidth/2, screenHeight/2, 69, LIGHTGRAY);
        }
        EndDrawing();
    }

    CloseWindow();   

    return 0;
}