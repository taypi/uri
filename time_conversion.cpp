#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

    int a, h, m, s;
	cin >> a;

	h = a/3600;
	m = (a - h*3600)/60;
	s = a - m*60 - h*3600;

	printf("%d:%d:%d\n", h, m, s);

    return 0;
}