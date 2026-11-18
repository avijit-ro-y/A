#include <graphics.h>
#include <conio.h>

void boundaryFill(int x, int y, int fillColor, int boundaryColor) {
    int currentColor = getpixel(x, y);

    if (currentColor != fillColor && currentColor != boundaryColor) {
        putpixel(x, y, fillColor);

        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
    }
}

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setbkcolor(WHITE);
    setcolor(BLUE);

    rectangle(100, 100, 158, 157);
    boundaryFill(101, 101, CYAN, BLUE);

    getch();
    closegraph();
    return 0;
}
