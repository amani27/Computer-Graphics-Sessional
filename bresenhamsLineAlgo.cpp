#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

// Function for line-generation
// using Bresenham's algorithm
void drawLineBres(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;

    dx=x2-x1;
    dy=y2-y1;

    x=x1;
    y=y1;

    p=2*dy-dx;

    while(x<x2)
    {
        if(p>=0)
        {
            putpixel(x,y, BLUE);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,BLUE);
            p=p+2*dy;
        }
        x=x+1;
    }
}

int main()
{
    int driver=DETECT, mode;
    int x1, x2, y1, y2;
    initgraph(&driver,&mode,"c:\\tc\\bgi");


    cout << "Enter coordinates of first point: ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point: ";
    cin >> x2 >> y2;
    drawLineBres(x1, y1, x2, y2);

    getch();
    closegraph();
}
