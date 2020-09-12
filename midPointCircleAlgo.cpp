#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
        putpixel(x0 + x, y0 + y, GREEN);
        putpixel(x0 + y, y0 + x, GREEN);
        putpixel(x0 - y, y0 + x, GREEN);
        putpixel(x0 - x, y0 + y, GREEN);
        putpixel(x0 - x, y0 - y, GREEN);
        putpixel(x0 - y, y0 - x, GREEN);
        putpixel(x0 + y, y0 - x, GREEN);
        putpixel(x0 + x, y0 - y, GREEN);

        if (err <= 0)
        {
            y += 1;
            err += 2*y + 1;
        }

        if (err > 0)
        {
            x -= 1;
            err -= 2*x + 1;
        }
    }
}

int main()
{
    int driver=DETECT, mode;
    int x, y, r;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter coordinates of center(x and y): ";
    cin >> x >> y;
    drawcircle(x, y, r);

    getch();
    closegraph();
}
