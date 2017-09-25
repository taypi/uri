#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

    int a, b[7] = {100, 50, 20, 10, 5, 2, 1}, c[7] = {0};
	cin >> a;

	printf("%d\n", a);

	for (int i = 0; i < 7; i++){
		while (a-b[i] >= 0 && a > 0) {
			c[i]++;
			a-=b[i];
		}
    	printf("%d nota(s) de R$ %d,00\n", c[i], b[i]); 
	}

    return 0;
}