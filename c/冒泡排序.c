#include<stdio.h>
int main(){
	int number[10];
	printf("打印十个数字\n"); 
	for(int i = 0;i < 10;i++){
		scanf("%d",&number[i]);
	}
	int t;
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < 9 - i;j++){
			if(number[j]> number[j+1]){
				t = number[i];
				number[j] = number[j+1];
				number[j + 1] = t;		
			}
			
		}
	} 
	for(int i = 0;i < 10;i++){
		printf("%d ",number[i]);
	}
	



return 0;
}

