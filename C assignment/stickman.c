#include <graphics.h>
#include <conio.h>

int main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

	/* face */
	circle(250, 100, 50);
	/* body */
	line(250, 150, 250, 300);
	/* hands */
	line(200, 200, 300, 200);
	/* legs */
	line(200, 350, 250, 300);
	line(300, 350, 250, 300);

	getch();
	closegraph();

	return 0;
}
