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
	printf("������price");
	scanf("%d",&price);
	printf("������bill"); 
	scanf("%d",&bill);
	if(bill >= price){
		printf("����Ϊ%d\n",bill- price);
	}else{
		printf("���Ǯ����,����%d\n",price - bill);
	} 
}


int Test(){
	int a,b;
	int max = 0;
	printf("������������\n");
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
	printf("������һ���¹�����Сʱ��\n");
	scanf("%d",&hours);
	if(hours > STANDARD)
		pay = STANDARD * RATE + (hours - STANDARD) * 1.5 * RATE;
	
	else
		pay = STANDARD * RATE;
	
	 
	printf("salary = %.2f\n",pay);
	
	
}


void Test03(){
//	print/* */f("hhehehe\n"); // �����ǲ��Ա�������ע��ת����ʲô
	//print f("hheheheh\n") ;
}
