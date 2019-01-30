#include <iostream>
#include "Data.h"
#include "Interface.h"

using namespace std;

void main()
{
	POINT_INFO_STRUCT   PointInfo[15];
	memset(PointInfo, 0, sizeof(POINT_INFO_STRUCT)*15);

	POINT_INFO_STRUCT   CornerInfo[4];
	memset(CornerInfo, 0, sizeof(POINT_INFO_STRUCT)*4);

	/* 读取位置信息 */
	load_position_info(PointInfo);

	/* Check */
	for (int i=0; i<15; i++)
	{
		cout<<"PointInfo["<<i<<"]=("<<PointInfo[i].x<<", "<<PointInfo[i].y<<")"<<endl;
	}

	/* GetCornerRectangle */
	GetCornerRectangle(
}