#include<bits/stdc++.h>
using namespace std;

int main(){

	int a, b, c;

	while( scanf("%d%d%d", &a, &b, &c) != EOF )
	{
		if( (a != b) && (a != c) )
			printf("%c\n", 'A');

		if( (b != a) && (b != c) )
			printf("%c\n", 'B');

		if( (c != b) && (c != a ) )
			printf("%c\n", 'C');

		if( (a == b) && (a == c) && ( c == b ) )
			printf("%c\n", '*');

	}//end while EOF
	
	return 0;
}//end main
