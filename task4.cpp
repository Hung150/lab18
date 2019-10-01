#include<iostream>
using namespace std;
count(double a[][100],int r,int c,int x){
	double s=0;
	int count=0;
	for(int i=1;i<=r;i++){
		s+=a[i][x];
	}
	for(int i=1;i<r;i++){
		if(a[i][x]>s/r){
			count++;
		}
	}
	return count;
}
main(){
	double a[100][100];
	int r,c,i,j;
	cout<<"enter the number of rows r: "; cin>>r;
	cout<<"enter the number of columns c: "; cin>>c;
	if(r*c==0){ cout<<"error";
	}else{
		for(i=1;i<=r;i++){
			for(j=1;j<=c;j++){
				cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		for(i=1;i<=c;i++){
			cout<<count(a,r,c,i)<<" ";
		}
	}
}
