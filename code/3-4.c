#include <stdio.h>


int main() {
	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };
	int (*p[2])[3] = { &arr0, &arr1 };
	//크기가 3인 int 배열의 포인터를 담고 있는 크기2의 배열

	int x, y;
	scanf("%d %d", &x, &y);

	printf("%d\n", *( *( *(p+x) ) +y ) );
	// (*p[x])[y] = (*(p[x]))[y]
	// a[i] <==> *(a+i)
	// *(p+x) = p[x] --> &arr0, &arr1 ... (주소값)
	// *p[x] --> (해당 배열 row)
	// = *( *(p+x) )
	// (*p[x])[y] = *(*p[x]+y) = *( *( *(p+x) )+y )



	return 0;
}
