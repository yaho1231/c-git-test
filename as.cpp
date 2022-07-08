#include <stdio.h>
int n,cnt=0,arr[5],val=1;
int main(){
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	while(1){
		for(int i=0;i<5;i++){
			if(val%arr[i]==0)
			cnt++;
		}
		if(cnt>=3){
			printf("%d",val);
			return 0;
		}
		val++;
		cnt=0;
	}
}
