#include<stdio.h>
enum number {
	RED,YELLOW,GREEN,NUMCOLORS //�Զ�������ö�� 
};
int main(int argc,char const *argv[]){
	int color = -1;
	char *ColorNames[NUMCOLORS] = {"red","yellow","green",};
	char *ColorName =NULL;
	printf("������ϲ������ɫ����\n");
	scanf("%d",&color);
	if(color >= 0 && color < NUMCOLORS){
		ColorName = ColorNames[color];
	}else{
		ColorName = "UnKnown";
	}
	printf("��ϲ������ɫ��%s\n",ColorName);
}
