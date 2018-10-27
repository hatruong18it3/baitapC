#include<stdio.h>
#include<conio.h>
#include<string.h>
// nhap mang
void nhapmang(int mang[100],int n){
	for (int i=0;i<n;i++){
		printf("mang[%d]= ",i);
		scanf("%d",&mang[i]);
	}
}
// in mang
void inmang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("mang[%d]=%d ",i,mang[i]);
	}
}
//tinh gt
int gt(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
}
//tinh gt cac pt trong mang
int tinhgt(int mang[100],int n){
	int s=0;
	for (int i=0;i<n;i++){
		s=s+gt(mang[i]);
	}
	return s;
}
int main(){
	int mang[100];
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	nhapmang(mang,n);
	inmang(mang,n);
	printf("\ntong gt=%d ",tinhgt(mang,n));
}
