#include <graphics.h>
#include <stdlib.h>
using namespace std;

int main()
{
    initwindow(630, 420);
    setbkcolor(CYAN);
    cleardevice();
    setcolor(WHITE);
    settextstyle(8, 0, 2);
    outtextxy(75, 15, "O'zbekiston Respublikasi Davlat Bayrog'i");
    setfillstyle(SOLID_FILL, BLUE);
    bar(50, 50, 580, 150);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(115, 100, 35, 35);
    setfillstyle(SOLID_FILL, BLUE);
    setcolor(BLUE);
    fillellipse(135, 100, 36, 25);
    setfillstyle(SOLID_FILL, RED);
    bar(50, 150, 580, 155);
    setfillstyle(SOLID_FILL, WHITE);
    bar(50, 155, 580, 255);
    setfillstyle(SOLID_FILL, RED);
    bar(50, 255, 580, 260);
    setfillstyle(SOLID_FILL, GREEN);
    bar(50, 260, 580, 360);
    setbkcolor(BLUE);
    setcolor(WHITE);
    settextstyle(8, 0, 4);
    outtextxy(150, 70, "  ***");
    outtextxy(150, 90, " ****");
    outtextxy(150, 110, "*****");
    setbkcolor(CYAN);
    settextstyle(8, 0, 1);
    outtextxy(250, 380, "Muallif : Khusanboy Sobirjonov");

    system("pause");
    return 0;
}