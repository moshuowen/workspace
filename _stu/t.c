#include<stdio.h>
int main(){
	void t3();
	t3();


return 0;
}
void t1(){
		int sum = 0;
	for(int i = 0;i < 10;i++){
		if(i % 2 == 1) break;
		sum += i;
	}

	printf("%d\n",sum);


}
void t2 (){
	int sum = 0;
	int x;
	scanf("%d",&x);
	int cnt = 0;
	while(x != -1){
		sum += x;
		cnt++;
		scanf("%d",x);
	}
	printf("%d\n",sum);
		
	
	
} 

void t3(){
	double sum = 0;
	int arr[100];
	int cnt = 0;
	int x;
	scanf("%d",&x);
	while(x != -1){
		arr[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt >0){
		printf("avg  = %f\n",sum / cnt);
		for(int i = 0;i < cnt;i++){
		if(arr[i] > sum / cnt){
			printf("%d\n",arr[i]);
		} 
 			
		}
	}
	
	
	
}
