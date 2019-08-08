#include<stdio.h>
int main(){
	int t;
	int number[10];
	for(int i = 0;i < 10;i++){
		scanf("%d",&number[i]);
	}
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < 9 - i;j++){
			if(number[j] > number[j+1]){
				t = number[j];
				number[j] = number[j + 1];
				number[j + 1] = t;
			}
			
		}
	}
	for(int i = 0;i < (sizeof(number) / sizeof(number[0]));i++){
		
		printf("%d\t",number[i]);
	} 


printf("\n");

return 0;
}

