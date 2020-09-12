#include <graphics.h>
#include<conio.h>

int main()
{
    int startx=10, starty=10, endx=400, endy=300;
    int driver=DETECT, mode;
    // int x,y,maxx,maxy,color=1;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    // maxx=getmaxx();
    // maxy=getmaxy();

    setcolor(1);

    line(startx, starty, endx, starty);
    line(startx, starty, startx, endy);
    line(endx, starty, endx, endy);
    line(startx, endy, endx, endy);

    getch();
    closegraph();
}

