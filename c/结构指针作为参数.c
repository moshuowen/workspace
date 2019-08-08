#include<stdio.h>
struct date {
	int year;
	int month;
	int day;
}myday;

int main(int argc ,char const *argv[]){
	struct date *p = &myday;
	(*p).month = 10;
	printf("%i\n",myday.month);
	p -> month = 12; 			// -> 表示指针所指向的结构中的成员 
	printf("%i\n",myday.month);	
	
	
	

	return 0;
}
