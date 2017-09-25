#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <set>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

 	unsigned int a, b, c, countA, countB;
 	set<unsigned int> ca, cb;
 	set<unsigned int>::iterator it;
 	
 	while(cin >> a >> b){
 		if(a == 0 && b == 0) break;
 		countA = 0; countB = 0;
 		ca.clear(); cb.clear();
	 	for(unsigned int i = 0; i < a; i++){
	 		cin >> c;
	 		ca.insert(c);	
	 	}
	 	for(unsigned int i = 0; i < b; i++){
	 		cin >> c;
	 		cb.insert(c);	
	 	}
	 	for(it = cb.begin(); it != cb.end(); ++it){
	 		if(ca.find(*it) == ca.end()) countA++;
	 	}
	 	for(it = ca.begin(); it != ca.end(); ++it){
	 		if(cb.find(*it) == cb.end()) countB++;
	 	}
	 	if(countA > countB) cout << countB << endl;
	 	else cout << countA << endl;
 	}
}