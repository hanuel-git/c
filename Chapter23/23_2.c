#include<Stdio,h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point a;
	Point b;
} Rectangle;

void cal_area(Rectangle R)
{
	printf("The area of rectangle is : %d", R.a.xpos)
}

void show_dot(Rectangle R)
{
	printf("аб ╩С╢э : [%d %d]", R.a.xpos, R.a.ypos);
	printf("аб го╢э : [%d %d]", R.a.xpos)
}


int main(void)
{
	Rectangle R = { {0,0}, {100,100} };
}