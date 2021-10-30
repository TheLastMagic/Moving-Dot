#include "include/raylib.h"
#include <stdlib.h>

int main(void)
{
    
    // Window width and height
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib Game");

    SetTargetFPS(60);

    // Dot X, Y
    int dotX = 300;
    int dotY = 185;               

    // Window Loop
    while (!WindowShouldClose())    
    {

        // Dot Movement
        if (IsKeyDown(KEY_D)) dotX += 2;
        if (IsKeyDown(KEY_A)) dotX -= 2;
        if (IsKeyDown(KEY_W)) dotY -= 2;
        if (IsKeyDown(KEY_S)) dotY += 2;
        
        BeginDrawing();

            ClearBackground(RAYWHITE);


            DrawCircle(dotX, dotY, 50, DARKBROWN);

            

        EndDrawing();
        
    }

    
    CloseWindow();        

    return 0;
}
