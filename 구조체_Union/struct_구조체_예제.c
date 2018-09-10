#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1, pos2; // pos1 과 pos2의 구조체 자료형 선언
	double distance;

	fputs("point1 pos: ", stdout);	// 모니터에 출력
	scanf("%d %d", &pos1.xpos, &pos1.ypos);		// pos1의 x,y좌표 입력

	fputs("point2 pos: ", stdout);	// 모니터에 출력
	scanf("%d %d", &pos2.xpos, &pos2.ypos);		// pos1의 x,y좌표 입력

	// 두점 사이 거리 공식, sqrt( (x1 - x2)^2 + (y1 - y2)^2 )
	distance = sqrt((double)((pos1.xpos - pos2.xpos)*(pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("두점 사이의 거리는 %g 입니다.\n", distance);

	return 0;
}
