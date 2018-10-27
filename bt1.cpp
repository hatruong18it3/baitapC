#include<stdio.h>
#include<conio.h>
main(){
	int tt;
	printf("nhap so dien tieu thu:");
	scanf("%d",&tt);
	int s=0;
	if(tt<=50) s=tt*1500;
	else if(tt>50&&tt<=100) s=tt*2000-50*500;
	else s=tt*2500-50*1000-50*500;
	printf("tong tien dien =%d ",s);
}

