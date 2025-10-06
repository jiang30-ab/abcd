#include <stdio.h>

int main()

{
	//初始化 
	int price=0;
	int bill=0;
	
	//输入金额 
	printf("请输入商品的金额："); 
	scanf("%d",&price);
	printf("请输入支付金额："); 
	scanf("%d",&bill);
	
	//得出结果 
	if(bill>=price){
		printf("应找金额：%d\n",bill-price);
	} 
	
	else{
		printf("您的钱不够\n");
	}
	
	
	
	
	
  }  
