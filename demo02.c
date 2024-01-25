#include <stdio.h>

int main()
{
	int a = 5;
	int b = 10;
	int c = 7;
	
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	int thuong = a / b;
	
	int ketqua1 = (a > b);
	int ketqua2 = (a <= b);
	int ketqua3 = (a == c);
	int ketqua4 = (a != c);
	
	int ketqua5 = (a < b && b > c);
	int ketqua6 = (a< b || b < c);
	int ketqua7 = !(a < b);
	
	printf("tong: %d\n", tong);
	printf("hieu: %d\n", hieu);
	printf("tich: %d\n", tich);
	printf("thuong: %d\n", thuong);
	
	printf("ketqua 1: %d\n", ketqua1);
	printf("ketqua 2: %d\n", ketqua2);
	printf("ketqua 3: %d\n", ketqua3);
	printf("ketqua 4: %d\n", ketqua4);
	 
	printf("ketqua 5: %d\n", ketqua5);
	printf("ketqua 6: %d\n", ketqua6);
	printf("ketqua 7: %d\n", ketqua7);
	
 	return 0;
}
