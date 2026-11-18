#include <graphics.h>
#include <conio.h>

void floodFill(int x, int y, int fillColor, int oldColor) {
    if (getpixel(x, y) == oldColor) {
        putpixel(x, y, fillColor);

        floodFill(x + 1, y, fillColor, oldColor);
        floodFill(x, y - 1, fillColor, oldColor);
        floodFill(x - 1, y, fillColor, oldColor);
        floodFill(x, y + 1, fillColor, oldColor);
    }
}

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(BLUE);
    rectangle(100, 100, 150, 150);

    // The inside of the rectangle is initially BLACK.
    floodFill(101, 101, CYAN, BLACK);

    getch();
    closegraph();
    return 0;
}
