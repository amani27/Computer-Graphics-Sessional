#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    // setfillstyle(int FILL_STYLE, int COLOR);
    setfillstyle(1,2);
    // bar3d(int startx, int starty, int endx, int endy, int depth, int topflag);
    // depth indicates bar's depth in pixels
    bar3d(10, 20, 100, 100, 5, 1);
    bar3d(110, 20, 200, 100, 10, 1);
    bar3d(210, 20, 300, 100, 10, 0);

    getch();
    closegraph();
}

