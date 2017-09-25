#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

    int c = 0, real, centavo, a[6]={100, 50, 20, 10, 5, 2}, b[5]={50, 25, 10, 5, 1};
	scanf("%d.%d", &real, &centavo);

	printf("NOTAS:\n");
	for (int i = 0; i < 6; i++){
		c = real/a[i];
		real-=a[i]*c;
		printf("%d nota(s) de R$ %.d.00\n", c, a[i]);
	}
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", real);
	for (int i = 0; i < 5; i++){
		c = centavo/b[i];
		centavo -= b[i]*c;
		printf("%d moeda(s) de R$ %.2f\n", c, b[i]/100.0);
	}	

    return 0;
}