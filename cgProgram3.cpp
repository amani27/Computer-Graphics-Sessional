#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    int x,y,maxx,maxy,color=1;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
    maxx=getmaxx();
    maxy=getmaxy();

    setcolor(1);

    for(y=0; y<maxy; y++)
    {
        line(0, y, maxx, y);
    }

    getch();
    closegraph();
}
