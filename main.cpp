#include "include/raylib.h"
#include <stdlib.h>

// Main function
int main(void)
{
    
    // Window width and height
    const int screenWidth = 800;
    const int screenHeight = 450;

    // Initialize the window
    InitWindow(screenWidth, screenHeight, "Raylib Game");

    SetTargetFPS(60);

    // Dot X, Y
    int dotX = 400;
    int dotY = 220;               

    // Window Loop
    while (!WindowShouldClose())    
    {

        // Dot Movement
        if (IsKeyDown(KEY_D)) dotX += 2;
        if (IsKeyDown(KEY_A)) dotX -= 2;
        if (IsKeyDown(KEY_W)) dotY -= 2;
        if (IsKeyDown(KEY_S)) dotY += 2;
        
        // Start's drawing on screen
        BeginDrawing();

            ClearBackground(RAYWHITE);


            DrawCircle(dotX, dotY, 50, DARKBROWN);

            

        // End's drawing on screen
        EndDrawing();
        
    }

    // Close's window
    CloseWindow();        

    // returns value 0
    return 0;
}
