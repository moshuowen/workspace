#include<stdio.h>
int main(int argc,char const *argv[]){
	struct date {
		int month;
		int day;
		int year;
	};
	
	struct date today;
	
	today.year = 2019;
	today.month =8;
	today.day = 7;
	
	printf("today is %i-%i-%i\n",
		today.year,today.month,today.day);
		
		return 0;
}
