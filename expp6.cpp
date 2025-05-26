#include <iostream.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Correct path for Turbo C++

    int x1, y1, x2, y2;

    cout << "Enter the coordinates of the line: ";
    cin >> x1 >> y1 >> x2 >> y2;

    int m = getmaxx();
    int n = getmaxy();

    // Draw original line
    setcolor(6);
    line(x1, y1, x2, y2);
    outtextxy(x1, y1 + 10, "Original Object");

    // Draw coordinate axes
    setcolor(4);
    line(m / 2, 0, m / 2, n);  // Y-axis
    line(0, n / 2, m, n / 2);  // X-axis

    // Reflection along X-axis
    setcolor(3);
    int y1_reflected = n - y1;
    int y2_reflected = n - y2;
    line(x1, y1_reflected, x2, y2_reflected);
    outtextxy(x1, y1_reflected + 10, "Reflection along X-axis");

    // Reflection along Y-axis
    setcolor(9);
    int x1_reflected = m - x1;
    int x2_reflected = m - x2;
    line(x1_reflected, y1, x2_reflected, y2);
    outtextxy(x2_reflected - 20, y2 + 10, "Reflection along Y-axis");

    getch();  // Wait for key press
    closegraph();
}
