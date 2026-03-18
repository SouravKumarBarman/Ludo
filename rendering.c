#include "raylib.h"

void renderSquare() {
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight=GetScreenHeight();
    float halfScreenHeight=screenHeight/2;
    float cellHeight=screenHeight/15;
    
    DrawRectangle(halfScreenWidth-halfScreenHeight,0, cellHeight*6, cellHeight*6, GREEN);
    DrawRectangle(halfScreenWidth+1.5*cellHeight,0, cellHeight*6, cellHeight*6, YELLOW);
    DrawRectangle(halfScreenWidth+1.5*cellHeight,9*cellHeight, cellHeight*6, cellHeight*6, BLUE);
    DrawRectangle(halfScreenWidth-halfScreenHeight,9*cellHeight, cellHeight*6, cellHeight*6, RED);
}

void renderCells(){
    Vector2 path[52];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight=GetScreenHeight();
    float cellHeight=screenHeight/15;
    Vector2 size=(Vector2){cellHeight,cellHeight};

    path[0]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-2*cellHeight};
    path[1]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-3*cellHeight};
    path[3]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-5*cellHeight};
    path[2]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-4*cellHeight};
    path[4]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-6*cellHeight};
    path[5]= (Vector2){halfScreenWidth-cellHeight*2.5, screenHeight-7*cellHeight};
    path[6]= (Vector2){halfScreenWidth-cellHeight*3.5, screenHeight-7*cellHeight};
    path[7]= (Vector2){halfScreenWidth-cellHeight*4.5, screenHeight-7*cellHeight};
    path[8]= (Vector2){halfScreenWidth-cellHeight*5.5, screenHeight-7*cellHeight};
    path[9]= (Vector2){halfScreenWidth-cellHeight*6.5, screenHeight-7*cellHeight};

    path[10]= (Vector2){halfScreenWidth-cellHeight*7.5, screenHeight-7*cellHeight};
    path[11]= (Vector2){halfScreenWidth-cellHeight*7.5, screenHeight-8*cellHeight};
    path[12]= (Vector2){halfScreenWidth-cellHeight*7.5, screenHeight-9*cellHeight};
    path[13]= (Vector2){halfScreenWidth-cellHeight*6.5, screenHeight-9*cellHeight};
    path[14]= (Vector2){halfScreenWidth-cellHeight*5.5, screenHeight-9*cellHeight};
    path[15]= (Vector2){halfScreenWidth-cellHeight*4.5, screenHeight-9*cellHeight};
    path[16]= (Vector2){halfScreenWidth-cellHeight*3.5, screenHeight-9*cellHeight};
    path[17]= (Vector2){halfScreenWidth-cellHeight*2.5, screenHeight-9*cellHeight};

    path[18]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-10*cellHeight};
    path[19]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-11*cellHeight};
    path[20]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-12*cellHeight};
    path[21]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-13*cellHeight};
    path[22]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-14*cellHeight};
    path[23]= (Vector2){halfScreenWidth-cellHeight*1.5, screenHeight-15*cellHeight};
    
    path[24]= (Vector2){halfScreenWidth-cellHeight*0.5,screenHeight-15*cellHeight};
    path[25]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-15*cellHeight};
    path[26]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-14*cellHeight};
    path[27]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-13*cellHeight};
    path[28]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-12*cellHeight};
    path[29]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-11*cellHeight};
    path[30]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-10*cellHeight};

    path[31]= (Vector2){halfScreenWidth+cellHeight*1.5,screenHeight-9*cellHeight};
    path[32]= (Vector2){halfScreenWidth+cellHeight*2.5,screenHeight-9*cellHeight};
    path[33]= (Vector2){halfScreenWidth+cellHeight*3.5,screenHeight-9*cellHeight};
    path[34]= (Vector2){halfScreenWidth+cellHeight*4.5,screenHeight-9*cellHeight};
    path[35]= (Vector2){halfScreenWidth+cellHeight*5.5,screenHeight-9*cellHeight};
    path[36]= (Vector2){halfScreenWidth+cellHeight*6.5,screenHeight-9*cellHeight};
    path[37]= (Vector2){halfScreenWidth+cellHeight*6.5,screenHeight-8*cellHeight};
    path[38]= (Vector2){halfScreenWidth+cellHeight*6.5,screenHeight-7*cellHeight};
    path[39]= (Vector2){halfScreenWidth+cellHeight*5.5,screenHeight-7*cellHeight};
    path[40]= (Vector2){halfScreenWidth+cellHeight*4.5,screenHeight-7*cellHeight};
    path[41]= (Vector2){halfScreenWidth+cellHeight*3.5,screenHeight-7*cellHeight};
    path[42]= (Vector2){halfScreenWidth+cellHeight*2.5,screenHeight-7*cellHeight};
    path[43]= (Vector2){halfScreenWidth+cellHeight*1.5,screenHeight-7*cellHeight};
    path[44]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-6*cellHeight};
    path[45]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-5*cellHeight};
    path[46]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-4*cellHeight};
    path[47]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-3*cellHeight};
    path[48]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-2*cellHeight};
    path[49]= (Vector2){halfScreenWidth+cellHeight*0.5,screenHeight-1*cellHeight};
    path[50]= (Vector2){halfScreenWidth-cellHeight*0.5,screenHeight-1*cellHeight};
    path[51]= (Vector2){halfScreenWidth-cellHeight*1.5,screenHeight-1*cellHeight};
    
    for(int i=0;i<52;i++){
        DrawRectangleV(path[i],size, WHITE);
        Rectangle rec={path[i].x,path[i].y,cellHeight,cellHeight};
        DrawRectangleLinesEx(rec,1,BLACK);
    }
}

void renderCenter(){
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight=GetScreenHeight();
    float halfScreenHeight=screenHeight/2;
    float cellHeight=screenHeight/15;

    Vector2 a=(Vector2){halfScreenWidth-1.5*cellHeight,6*cellHeight};
    Vector2 b=(Vector2){halfScreenWidth-1.5*cellHeight,9*cellHeight};
    Vector2 c=(Vector2){halfScreenWidth+1.5*cellHeight,9*cellHeight};
    Vector2 d=(Vector2){halfScreenWidth+1.5*cellHeight,6*cellHeight};
    Vector2 e=(Vector2){halfScreenWidth,halfScreenHeight};
    DrawTriangle(a,b,e,GREEN);
    DrawTriangle(e,b,c,RED);
    DrawTriangle(e,c,d,BLUE);
    DrawTriangle(a,e,d,YELLOW);
    DrawRectangleLinesEx((Rectangle){a.x,a.y,3*cellHeight,3*cellHeight},1,BLACK);
    DrawLineEx(a,c,2,BLACK);
    DrawLineEx(b,d,2,BLACK);
}

void renderGreenHomePath(){
    Vector2 homePath[5];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight=GetScreenHeight();
    float halfScreenHeight=screenHeight/2;
    float cellHeight=screenHeight/15;

    homePath[0]=(Vector2){screenWidth-6.5*cellHeight,7*cellHeight};
    homePath[0]=(Vector2){screenWidth-6.5*cellHeight,7*cellHeight};
    homePath[0]=(Vector2){screenWidth-6.5*cellHeight,7*cellHeight};
    homePath[0]=(Vector2){screenWidth-6.5*cellHeight,7*cellHeight};
    homePath[0]=(Vector2){screenWidth-6.5*cellHeight,7*cellHeight};

}

