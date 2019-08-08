#include<stdio.h>
struct date {
	int year;
	int month;
	int day;
};
int main(){
	struct date today ;
	today = (struct date){
		2019,8,7	
	}; 
	struct date day = today; 
	day.year = 2020;
	
	struct date *pdate = &today;
	struct date thismonth = {
		.month = 8,
		.year = 2019  //.day = 0
	};
	 
	printf("today is %i-%i-%i\n",today.year,today.month,today.day);
	printf("day is %i-%i-%i\n",day.year,day.month,day.day);
	printf("thismonth is %i-%i-%i\n",thismonth.year,thismonth.month,thismonth.day);
	printf("pdate address is %p\n",pdate);
	return 0;
} 
