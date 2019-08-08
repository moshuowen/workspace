#include<stdio.h>
int Test();
int Test01(); 
int Test02();
void Test03();
int main(){

	//Test01();
	//Test();
	//Test02();
	Test03(); 
	
		
return 0;


}
int  Test01(){
	int bill;
	int price;
	printf("请输入price");
	scanf("%d",&price);
	printf("请输入bill"); 
	scanf("%d",&bill);
	if(bill >= price){
		printf("找零为%d\n",bill- price);
	}else{
		printf("你的钱不够,还差%d\n",price - bill);
	} 
}


int Test(){
	int a,b;
	int max = 0;
	printf("请输入两个数\n");
	scanf("%d %d",&a,&b);
	max = b;
	if(a > b){
		max = a;
	}
	printf("max = %d\n",max);
	
	
	
}

int Test02(){
	double pay = 0.0;
	const double RATE = 8.25;
	const int STANDARD =  40;
	int hours;
	printf("请输入一个月工作的小时数\n");
	scanf("%d",&hours);
	if(hours > STANDARD)
		pay = STANDARD * RATE + (hours - STANDARD) * 1.5 * RATE;
	
	else
		pay = STANDARD * RATE;
	
	 
	printf("salary = %.2f\n",pay);
	
	
}


void Test03(){
//	print/* */f("hhehehe\n"); // 这里是测试编译器把注释转化成什么
	//print f("hheheheh\n") ;
}
