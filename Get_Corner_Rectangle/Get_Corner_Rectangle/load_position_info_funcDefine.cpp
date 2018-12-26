#include <iostream>
#include <fstream>
#include "Config.h"
#include "Data.h"
#include <string>
#include <string.h>

using namespace std;

void load_position_info(POINT_INFO_STRUCT PointInfo[])
{
	double   dd = 0;

	fstream   in;

	string   str = txtRoad;
	str = str + "Random_2D.txt";

	int   Count = 0,
		  i = 0,
		  j = 0;

	in.open(str.c_str(), ios::in);
	if (in)
	{
		while(!in.eof())
		{
			in>>dd;

			if ((Count >= 0) && (Count < 15))
			{
				PointInfo[i].x = dd;
				i = i + 1;
				Count = Count + 1;
			}
			else if ((Count >= 15) && (Count < 30))
			{
				PointInfo[j].y = dd;
				j = j + 1;
				Count = Count + 1;
			}
		}
	}
	in.close();
}