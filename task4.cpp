#include<iostream>
using namespace std;
count(double a[][100],int m,int n,int x){
	double s=0;
	int count=0;
	for(int i=1;i<=m;i++){
		s+=a[i][x];
	}
	for(int i=1;i<=n;i++){
		if(a[i][x]>s/m){
			count++;
		}
	}
	return count;
}
main(){
	double a[100][100];
	int m,n,i,j;
	cout<<"--Enter the number of rows M: "; cin>>m;
	cout<<"--Enter the number of columns N: "; cin>>n;
	if(m*n==0){ cout<<"--Error--";
	}else{
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<"--Enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"The matrix: "<<"\n\n";
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n\n";
		}
		for(i=1;i<=n;i++){
			cout<<count(a,m,n,i)<<" ";
		}
	}
}
