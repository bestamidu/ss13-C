#include<stdio.h>


int mang_2chieu( int row , int col ){
	int arr[row][col];
	for ( int i =0 ; i<row ; i++){
		for (int j =0 ; j < col ; j++){
			printf(" nhap gia tri cho mang arr[%d][%d]",i ,j );
			scanf("%d",&arr[i][j]);
		}
	}


       for ( int i =0 ; i<row ; i++){
		for (int j =0 ; j < col ; j++){
			printf ("%d",arr[i][j]);}
			printf("\n");
		}
	}

int main(){
	int m ,n;
	printf("nhap hang la ");
	scanf("%d",&m);
	printf("nhap cot la ");
	scanf("%d",&n);
	mang_2chieu(m,n);
	return 0;
}