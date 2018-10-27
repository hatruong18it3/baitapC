#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char chuoi[50];
	printf("nhap chuoi: ");
	scanf("%s",chuoi);
	int dem=0;
	for(int i=0;i<strlen(chuoi);i++) {
		dem++;
	}
	printf("so ki tu trong chuoi la: %d",dem);
}

