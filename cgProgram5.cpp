#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    // int x,y,maxx,maxy,color=1;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    // maxx=getmaxx();
    // maxy=getmaxy();

    // setcolor(1);

    // setlinestyle(int linestyle, int upattern, int thickness)
    setlinestyle(SOLID_LINE,1,1);
    line(10, 10, 50, 10);
    rectangle(70, 10, 100, 50);

    setlinestyle(SOLID_LINE,1,3);
    line(210, 10, 250, 10);
    rectangle(270, 10, 300, 50);

    setlinestyle(DOTTED_LINE,1,3);
    line(10, 100, 50, 100);
    rectangle(70, 100, 100, 150);

    setlinestyle(CENTER_LINE,1,1);
    line(10, 200, 50, 200);
    rectangle(70, 200, 100, 250);

    setlinestyle(DASHED_LINE,1,3);
    line(10, 300, 50, 300);
    rectangle(70, 300, 100, 350);

    setlinestyle(USERBIT_LINE,1,3);
    line(10, 400, 50, 400);
    rectangle(70, 400, 100, 450);

    getch();
    closegraph();
}

