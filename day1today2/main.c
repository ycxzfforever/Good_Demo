#include "stdio.h"

int Day1ToDay2(int year_start, int month_start, int day_start
             , int year_end, int month_end, int day_end)
{
    int y2, m2, d2;
    int y1, m1, d1;

    m1 = (month_start + 9) % 12;
    y1 = year_start - m1/10;
    d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (day_start - 1);	
	printf("m1=%d y1=%d d1=%d t1=%d t2=%d\n",m1,y1,d1,y1/4 - y1/100 + y1/400,(m1*306 + 5)/10);

    m2 = (month_end + 9) % 12;
    y2 = year_end - m2/10;
    d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (day_end - 1);
	printf("m2=%d y2=%d d2=%d\n",m2,y2,d2);
    return (d2 - d1);
}

int main()
{
    int ret;
    ret=Day1ToDay2(2015,10,16,2015,12,30);
    printf("ret=%d\n",ret);
    getchar();
    return 0;
}

