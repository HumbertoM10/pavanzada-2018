#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    int Hmax=H; // Y coordinate of the upper-part of the new area to search
    int Hmin=0; // Y coordinate of the lower-part of the new area to search
    int Wmax=W; // X coordinate of the right-part of the new area to search
    int Wmin=0; // X coordinate of the left-part of the new area to search
    scanf("%d%d", &X0, &Y0);

    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);

        if(bombDir[0]=='U'){
            Hmax=Y0+1;
            Y0=Y0-(Hmax-Hmin)/2;
        }
        if(bombDir[0]=='D'){
            Hmin=Y0;
            Y0=Y0+(Hmax-Hmin)/2;
        }
        if(bombDir[0]=='R'){
            Wmin=X0;
            X0=X0+(Wmax-Wmin)/2;
        }
        if(bombDir[0]=='L'){
            Wmax=X0+1;
            X0=X0-(Wmax-Wmin)/2;
        }
        if(bombDir[1]=='R'){
            Wmin=X0;
            X0=X0+(Wmax-Wmin)/2;
        }
        if(bombDir[1]=='L'){
            Wmax=X0+1;
            X0=X0-(Wmax-Wmin)/2;
        }
        // the location of the next window Batman should jump to.
        printf("%d %d\n", X0, Y0);
    }

    return 0;
}