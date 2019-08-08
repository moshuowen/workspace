#include<stdio.h>
void Test();
int main(){
	int i,n;
	int fact = 1;
	scanf("%d",&n);
	for(i = 1;i <= n;i++){
		fact *= i;
	}
	printf("%d\n",fact);
	 Test();
	int f = 1;
	for(int j = 1;j < 5;j++){
		f *= j;
	}
	printf("%d\n",f);
	


return 0;
}
void Test(){
	int i = 1;
	int n;
	int fact = 1;
	scanf("%d",&n);
	while(i <= n){
		fact *= i;
		i++;
	}
	printf("%d\n",fact);
} 

void t1(){
	int x;
	scanf("%d",&x);
	int factor = 1; 
	for(int i = 1;i <= x;i++){
		factor *= i;
	}
	printf("%d\n",factor);
	
} 
