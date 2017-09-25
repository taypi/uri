#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

    int a, y, m, d;
	cin >> a;

	y = a/365;
	m = (a - y*365)/30;
	d = a - m*30 - y*365;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;
}