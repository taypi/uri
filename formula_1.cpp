#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

#define ler freopen("in.txt", "r", stdin)
 
using namespace std;
 
int main() {
//  	ler;

 	int g, p, positions[101][101], nScoring, last, scoring[101], pilotScoring[101], maxE, f;

 	while((cin >> g >> p) && (g || p)){
   		memset(positions, 0, sizeof(positions));
 		for(int i = 0; i < g; i++){
 			for(int j = 0; j < p; j++){
 				cin >> positions[i][j];
 			}
 		}
 		cin >> nScoring;
 		for(int i = 0; i < nScoring; i++){
 			memset(pilotScoring, 0, sizeof(pilotScoring)); 
   			memset(scoring, 0, sizeof(scoring));
 			cin >> last;
 			for(int j = 0; j < last; j++){
 				cin >> scoring[j];
 			}
 			for(int k = 0; k < p; k++) pilotScoring[k] = 0;
 			for(int k = 0; k < g; k++){
 				for(int l = 0; l < p; l++){
 					pilotScoring[l] += scoring[positions[k][l]-1];
 				}
 			}
 			maxE = 0; f = 1;
 			for(int l = 0; l < p; l++)
 				if(pilotScoring[l] > maxE) maxE = pilotScoring[l];
 			for(int l = 0; l < p; l++){
 				if(pilotScoring[l] == maxE) {
 					if(f) { cout << l+1; f = 0; }
 					else cout << " " << l+1;
 				}
 			}
 			cout << endl;
 		}
 	}
 	return 0;
}