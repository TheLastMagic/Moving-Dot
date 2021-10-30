#include "include/raylib.h"
#include <stdlib.h>

int main(void)
{
    
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib Game");

    SetTargetFPS(60);

    int dotX = 300;
    int dotY = 185;               

    while (!WindowShouldClose())    
    {

        if (IsKeyDown(KEY_D)) dotX += 2.0f;
        if (IsKeyDown(KEY_A)) dotX -= 2.0f;
        if (IsKeyDown(KEY_W)) dotY -= 2.0f;
        if (IsKeyDown(KEY_S)) dotY += 2.0f;
        
        BeginDrawing();

            ClearBackground(RAYWHITE);


            DrawCircle(dotX, dotY, 50, BLUE);
            

        EndDrawing();
        
    }

    
    CloseWindow();        

    return 0;
}
