#include <iostream>
#include <stdlib.h>
using namespace std;
int n,m,arr[101][101],crr[101][101];

int main() {
	cin >> n >> m;
	for(int i=0;i<2*n-1;i++){
		for(int j=0;j<m;j++){
			scanf("%d ",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			crr[i][j]=arr[i][j]+arr[i+n][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",crr[i][j]);
		}
		cout<<endl;
	}
}
