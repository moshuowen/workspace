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
	p -> month = 12; 			// -> ��ʾָ����ָ��Ľṹ�еĳ�Ա 
	printf("%i\n",myday.month);	
	
	
	

	return 0;
}
