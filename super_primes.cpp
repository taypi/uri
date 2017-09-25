#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;

bool isPrime(long int n) {
	if (n == 0 || n == 1) return false;
	for (int i = 2; i < n; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}
 
int main() {
//  	ler;

    long int n, digit, number;
    int f;

    while(cin >> n){
    	// printf("%ld\n", n);
    	if(!isPrime(n)) printf("Nada\n");
    	else {
    		f = 0;
    		number = n;
    		while(number > 0){
    			digit = number%10;
    			number /= 10;
    			if(!isPrime(digit)){
    				f = 1;
    				break;
    			}
    		}
    		if(f) printf("Primo\n");
    		else printf("Super\n");
    	}
    }

    return 0;
}