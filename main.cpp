#include "include/raylib.h"
#include <stdlib.h>

#define MAX_COLORS_COUNT    20 
#define BLACK CLITERAL(Color){ 0, 0, 0, 255 }
#define WHITE CLITERAL(Color){ 255, 255, 255, 255 }

// Main function
int main(void)
{
    
    // Window width and height
    const int screenWidth = 800;
    const int screenHeight = 450;

    // Initialize the window
    InitWindow(screenWidth, screenHeight, "Moving Dot");

    SetTargetFPS(60);

    // Dot X, Y
    int dotX = 400;
    int dotY = 220;

    // Dot Color
    Color dotColor = DARKBROWN;

    // Dot Size
    int dotSize = 50;
    

    // Window Loop
    while (!WindowShouldClose())    
    {

        // Dot Movement
        if (IsKeyDown(KEY_D)) dotX += 2;
        if (IsKeyDown(KEY_A)) dotX -= 2;
        if (IsKeyDown(KEY_W)) dotY -= 2;
        if (IsKeyDown(KEY_S)) dotY += 2;
        
        // Changing dot colors
        int dotColorNum = 0;
        // Special color num
        int specColorNum = 0;

        if (IsKeyDown(KEY_ONE)) dotColorNum = 1;
        if (IsKeyDown(KEY_TWO)) dotColorNum = 2;
        if (IsKeyDown(KEY_THREE)) dotColorNum = 3;
        if (IsKeyDown(KEY_FOUR)) dotColorNum = 4;
        if (IsKeyDown(KEY_FIVE)) dotColorNum = 5;
        if (IsKeyDown(KEY_SIX)) dotColorNum = 6;
        if (IsKeyDown(KEY_SEVEN)) dotColorNum = 7;
        if (IsKeyDown(KEY_EIGHT)) dotColorNum = 8;
        if (IsKeyDown(KEY_NINE)) dotColorNum = 9;
        if (IsKeyDown(KEY_ONE) && IsKeyDown(KEY_ZERO)) specColorNum = 10;
        
        if (dotColorNum == 1) dotColor = BLACK;
        if (dotColorNum == 2) dotColor = GRAY;
        if (dotColorNum == 3) dotColor = RED;
        if (dotColorNum == 4) dotColor = ORANGE;
        if (dotColorNum == 5) dotColor = YELLOW;
        if (dotColorNum == 6) dotColor = GREEN;
        if (dotColorNum == 7) dotColor = BLUE;
        if (dotColorNum == 8) dotColor = PURPLE;
        if (dotColorNum == 9) dotColor = BROWN;
        if (specColorNum == 10) dotColor = WHITE;

        // Changing dot size by pressing E and Q
        if (IsKeyDown(KEY_E)) ++dotSize;
        if (IsKeyDown(KEY_Q)) --dotSize;
        
        // Start's drawing on screen
        BeginDrawing();

            ClearBackground(WHITE);


            DrawCircle(dotX, dotY, dotSize, dotColor);

            DrawText("Press 1,2,3,4,5,6,7,8,9 to change the color of the ball", 30, 20, 20, BLACK);

        // End's drawing on screen
        EndDrawing();
        
    }

    // Close's window
    CloseWindow();        

    // returns value 0
    return 0;
}

