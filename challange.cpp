#include<iostream>
using namespace std;
int main (){
	int g,p,arr[5][3],count1,count2;
	for(int i=0;i<5;i++){
		for(int j=0;j<1;j++){
		for(int k=0;k<2;k++){
			cin>>arr[j][k];
		}
	 }
    }
	 g=arr[0][0];
	 p=arr[0][1];
		for(int j=0;j<5;j++){
			for(int k=0;k<3;k++){
				cin>>arr[j][k];
			}
		}
		count1=0;
		for(int j=0;j<3;j++){
			if(arr[j][0]==1)
            count1=count1+g;
			if(arr[j][1]==1)
            count1=count1+p;
		}
		count2=0;
		for(int j=0;j<5;j++){
			if(arr[j][0]==1)
            count2=count2+p;
			if(arr[j][1]==1)
            count2=count2+g;
		}
	
		cout<<count1<<endl;
		cout<<count2;
	
	return 0;
}