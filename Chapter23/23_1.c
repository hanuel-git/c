#include<Stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* a, Point* b)
{
	Point c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	
	printf("First : [%d %d] [%d %d]\n",
		pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	SwapPoint(&pos1, &pos2);
	printf("Second : [%d %d] [%d %d]",
		pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	
	return 0;
}