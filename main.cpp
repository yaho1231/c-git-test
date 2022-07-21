#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <bits/stdc++.h>
#include <stdio.h>
#define INF 999999999
using namespace std;

int m,n,arr[10000001];
int main() {
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		arr[m]++;
	}
	for(int i=1;i<10000001;i++){
		if(arr[i]!=0){
			for(int j=0;j<arr[i];j++){
				cout<<i<<'\n';
			}
		}
	}
}
