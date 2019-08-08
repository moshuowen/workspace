#include<stdio.h>
void Test01();
int main(){
	
	Test01();
	
	
	
return 0;
}


void Test01(){
	int x;
	int n = 1;
	printf("请输入一个四位数及一下的数\n");
	scanf("%d",&x);
	if(x > 999){
		n = 4;
	}else if(x >99){
		n = 3;
	}else if(x > 9){
		n = 2;
	}
	printf("%d位数\n",n);	
} 




