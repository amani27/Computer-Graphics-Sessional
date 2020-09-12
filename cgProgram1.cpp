#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    int x,y,maxx,maxy,color=1;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
    maxx=getmaxx();
    maxy=getmaxy();

    for(x=0; x<maxx; x++)
    {
        for(y=0; y<maxy; y++)
        {
            //putpixel(int x, int y, int color)
            // x y coordinates & color
            putpixel(x,y,color);
        }
    }

    getch();
    closegraph();
}
