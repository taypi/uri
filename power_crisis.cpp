#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

 	int n, m, count;
 	bool f;
 	set<int> s;

 	while((cin >> n) && n){
 		m = 1; 
 		while(1) {
 			count = 1; 
 			s.clear(); s.insert(1); 
 			f = true;
 			while(s.size() != n && f == true){
 				for(int i = 0; i < m; i++){
	 				count++;
	 				if(count > n) count = 1;
	 				if(s.find(13) != s.end() && s.size() < n) { 
	 					f = false;
	 					break; 
	 				}
	 				if(s.find(count) == s.end()) {
	 					if(i == m-1) s.insert(count);
	 				} 
	 				else i--;
			 	}
 			}
 			if(f) break;
 			else m++;
 		}
 		cout << m << endl;
 	}
 	return 0;
}