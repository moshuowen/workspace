#include<stdio.h>
void Test01();
int main(){
	
	Test01();
	
	
	
return 0;
}


void Test01(){
	int x;
	int n = 1;
	printf("������һ����λ����һ�µ���\n");
	scanf("%d",&x);
	if(x > 999){
		n = 4;
	}else if(x >99){
		n = 3;
	}else if(x > 9){
		n = 2;
	}
	printf("%dλ��\n",n);	
} 




