#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    int radius=50, i;

    setcolor(3);

    // circle(int x, int y, int radius)
    // x = x coordinate of center
    // y = y coordinate of center
    for(i=0; i<=radius; i++) circle(100, 100, i);

    for(i=radius; i>=0; i--) circle(300, 100, i);


    getch();
    closegraph();
}

