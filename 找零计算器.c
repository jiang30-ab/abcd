#include <stdio.h>

int main()

{
	//��ʼ�� 
	int price=0;
	int bill=0;
	
	//������ 
	printf("��������Ʒ�Ľ�"); 
	scanf("%d",&price);
	printf("������֧����"); 
	scanf("%d",&bill);
	
	//�ó���� 
	if(bill>=price){
		printf("Ӧ�ҽ�%d\n",bill-price);
	} 
	
	else{
		printf("����Ǯ����\n");
	}
	
	
	
	
	
  }  
