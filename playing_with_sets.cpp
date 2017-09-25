#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

 	bitset<60> result, set[10000], a;
 	a[0] = 1;
 	int n, nSets, nNum, num, nOp, op, s1, s2;
 	cin >> n;

 	for(int i = 0; i < n; i++){
 		cin >> nSets;
 		for(int j = 0; j < nSets; j++){
 			set[j].reset();
 			cin >> nNum;
 			for(int k = 0; k < nNum; k++){
 				cin >> num;
 				set[j] |= a << 60-num;
 			}
 		}
 		cin >> nOp;
 		for(int j = 0; j < nOp; j++){
 			cin >> op >> s1 >> s2;
 			if(op == 1) result = set[s1-1] & set[s2-1];
 			else result = set[s1-1] | set[s2-1];
 			cout << result.count() << endl;
 		}
 	}
}