#include<iostream>
using namespace std;
main(){
	double a[100][100],s=0,p=1;
	int n,r,c,i,j;
	cout<<"enter the number of rows r(r>=1): "; cin>>r;
	cout<<"enter the number of columns c(c>=0): "; cin>>c;
	cout<<"enter n(r>=n>=1): "; cin>>n;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
		}
	}
	if(r<1^c<0^r<n^n<1){ cout<<"error";
	}else{
		cout<<"the matrix:";
		cout<<"\n";
		for(i=1;i<=r;i++){
			for(j=1;j<=c;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
		for(i=1;i<=c;i++){
			s+=a[n][i];
			p*=a[n][i];
		}
		cout<<"the sum of the elements of the n-th row of this matrix: "<<s;
		cout<<"\n";
		cout<<"the product of the elements of the n-th row of this matrix: "<<p;
	}
}
