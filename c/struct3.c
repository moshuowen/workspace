#include<stdio.h>
#include<stdbool.h>
struct date {
	int month;
	int day;
	int year;
};
int main(int argc,char const *argv[]) {
	
	
	
	return 0;
}

int numberOfDays(struct date d){
	int days;
	const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30.31};
	if(d.month ==2 && isLeap(d))
		days = 29;
	else
		days = daysPerMonth[d.month - 1];
	 
	return days;
}


int isLeap(struct date d){
	bool leap = false;
	if(	(d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leap = true;
	
	
	
	return leap;
}

