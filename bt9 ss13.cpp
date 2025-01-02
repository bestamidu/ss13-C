#include<stdio.h>
#define max_Size 100
  void nhapmang( int duci[max_Size][max_Size], int m , int n  ){
  	for ( int i =0 ; i < m ; i++){
  		for ( int j = 0 ; j<n ; j++){
  			printf(" nhap gia tri cho duci[%d][%d] = ", i , j );
  			scanf("%d",&duci[i][j]);
		  }
	  }
  }
  void print( int duci[max_Size][max_Size] , int m , int n ){
  	 for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            printf("%d ", duci[i][j]);  
        }  
        printf("\n");  
}
}
  void goc_cheo( int duci[max_Size][max_Size] , int m , int n  ){
  	printf(" vi tri tren cung ben trai la %d ",duci[0][0]);
  		printf("vi tri tren ben phai la %d ",duci[0][n-1]);
  			printf("vi tri cuoi ben trai la %d", duci[m-1][0]); 
  				printf("vi tri cuoi ben phai %d",duci[m-1][n-1]);
  }
  void inBien(int arr[max_Size][max_Size], int n, int m) {  
    printf("Cac phan tu nam tren bien:\n");  
    for (int j = 0; j < m; j++) printf("%d ", arr[0][j]);    
    for (int i = 1; i < n - 1; i++) printf("%d ", arr[i][0]);
    for (int j = 0; j < m; j++) printf("%d ", arr[n-1][j]); 
    for (int i = 1; i < n - 1; i++) printf("%d ", arr[i][m-1]); 
    printf("\n");  
}
    void duongcheochinh( int duci[max_Size][max_Size], int n, int m){
    for(int i=0 ; i<m ; i++){
        printf("%d",duci[i][i]); }
        printf("\n");
        printf("cac so tren dcheo phu ");
     for(int i=0 ; i<m ; i++){
     	printf("%d",duci[i][n-1-i]);
    }
    printf("\n");
}
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main(){
	int m ,n ;
	int arr[max_Size][max_Size];
	printf("nhap hang la ");
	scanf("%d", &m );
	printf("nhap cot la ");
    scanf("%d", &n);  
    int choice;
  do {  
        printf("\nMENU\n");  
        printf("1. Nhap gia tri cac phan tu cua mang\n");  
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");  
        printf("3. In ra cac phan tu o goc theo ma tran\n");  
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");  
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");  
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");  
        printf("7. Thoat\n");  
        printf("Nhap lua chon: ");  
        scanf("%d", &choice);  

        switch (choice) {  
        case 1 :
        	nhapmang(arr, m,n );
        	break;
        case 2:
        	print(arr , m ,n );
        	break;
        case 3 :
        	goc_cheo(arr, m,n);
        	break;
        case 4 : 
        inBien(arr, m,n);
        break;
        case 5:
        	duongcheochinh(arr, m,n);
        	break;
        	case 6:
        		printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
    }
}
}
}
} while( choice!=7);
return 0;
}