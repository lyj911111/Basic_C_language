#include <stdio.h>
#include <windows.h>

int sec = 0;
int min = 0;
int hour_12 = 12;
int hour_24 = 12;
int PMhour_12 = 0;
int ampm = 0;


int main()
{
	while (1)
	{
		if (++sec == 60)
		{
			sec = 0;
			if (++min == 60)
			{
				min = 0;
				if (++hour_12 == 13)      // Over at 12:59:59
				{
					hour_12 = 1;
				}

				if (++PMhour_12 == 12)
				{
					PMhour_12 = 0;
				}
				if (hour_24 == 12 && min == 0 && sec == 0)
					ampm = 1;
				else if (hour_24 == 23 && min == 0 && sec == 0)
					ampm = 0;

				if (++hour_24 == 24)
				{
					hour_24 = 0;
				}
			}

		}
		printf("ampm: %02d, hour_24: %02d, PMhour: %02d, hour_12: %02d ", ampm, hour_24, hour_12,PMhour_12);
		printf("\n");
	}


	return 0;
}
