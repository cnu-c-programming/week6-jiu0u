#include <stdio.h>


int main() {
	int arr3[2][3][4] = { 0 };

	int (*p)[3][4] = arr3;

	printf("%zu\n", sizeof(p));			//int (*)[3][4] ==> 8 (pointer)
	printf("%zu\n", sizeof(*p));		//int [3][4] ==> 48 (4bit*12)
	printf("%zu\n", sizeof(**p));		//int [4] ==> 16 (4bit * 4)
	printf("%zu\n", sizeof(***p));		//int  ==> 4 (int)

	printf("%p\n", (void*)(p)); //%p 형식 지정자의 기댓값 void* 타입
	printf("%p\n", (void*)(*p));
	printf("%p\n", (void*)(**p));
	printf("%d\n", ***p); //그냥 int
	
	return 0;
}
