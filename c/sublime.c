#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
}today;


int int main(int argc, char const *argv[])
{
	struct date *p = &today;
	p->year = 2019;
	p->month =8;
	p->day = 8;
	printf("%i-%i-%i\n",today.year,today.month,today.day );
	return 0;
}