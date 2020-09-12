#include <graphics.h>
#include<conio.h>

int main()
{
    int driver=DETECT, mode;
    //int x,y,maxx,maxy,color=1;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
    //maxx=getmaxx();
   //maxy=getmaxy();
    int i;
//  setcolor(2);

    for(i=0; i<200; i++)
    {
        setcolor(i);
        line(200+i,50,400-i,250);
        line(200,250-i,400,50+i);
    }

    getch();
    closegraph();
}
