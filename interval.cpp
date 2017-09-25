#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

    float a;
    cin >> a;
    if (a > 100 || a < 0) printf("Fora de intervalo\n");
    else {
    	for(int i = 25; i < 101; i+=25)
    		if(a <= i) {
    			if(i == 25) printf("Intervalo [0,25]\n");
    			else printf("Intervalo (%d,%d]\n", i-25, i);
    			break;
    		}
    }

    return 0;
}