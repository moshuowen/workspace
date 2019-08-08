#include<stdio.h>
int main(){
	void test01();
	void test02();
	void test03();
	void Test04();
	//test01();
	//test02();
	//test03();
	Test04();
	return 0;
}
void test01(){
	printf("%d\n",5 == 3);
	printf("%d\n",5 < 3);
	printf("%d\n",5 >= 3); 
}


void test02(){
	
	
	
	
	
}

void test03(){
	int minute1 ,hour1;
	int minute2 ,hour2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if(im < 0){
		im = 60 + im;
		ih--;
	}
	printf("时间差是%d小时 %d分\n",ih,im);
} 


void Test04(){
	int x;
	int n = 0;
	scanf("%d",&x);
	n++;
	x /= 10;
	while(x >0){
		n++;
		x /= 10;
	} 
	
	printf("%d\n",n);
	
} 
