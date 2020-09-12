#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    int x,y,maxx,maxy,color;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
    maxx=getmaxx();
    maxy=getmaxy();
    color=5;
    for(x=0; x<maxx; x++)
    {
        for(y=0; y<maxy; y++)
        {
            putpixel(x,y,color);
        }
    }

    x=20;
    y=50;
    color=15;
    for(int i=x; i<=400; i++)
    {
        putpixel(i,50,color);
    }
    for(int i=y; i<=300; i++)
    {
        putpixel(20,i,color);
    }

    getch();
    closegraph();
}
