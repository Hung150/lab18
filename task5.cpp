#include<iostream>
using namespace std;
check_column_containning_only_odd_numbers(int a[][100],int M,int x){
	int count=0;
	for(int i=1;i<=M;i++){
		if(a[i][x]%2==1){
			count++;
		}
	}
	if(count==M){
		return 1;
	}else{
		return 0;
	}
}
check_whether_the_matrix_has_any_columns_containning_only_odd_numbers(int a[][100],int N,int M){
	int count=0;
	for(int i=1;i<=N;i++){
		if(check_column_containning_only_odd_numbers(a,M,i)==1){
			count++;
		}
	}
	if(count>0){
		return 1;
	}else{
		return 0;
	}
}
main(){
	int a[100][100];
	int M,N,i,j;
	cout<<"enter the number of rows M: "; cin>>M;
	cout<<"enter the number of columns N: "; cin>>N;
	if(M*N==0){ cout<<"error";
	}else{
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"the matrix: ";
		cout<<"\n";
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
		if(check_whether_the_matrix_has_any_columns_containning_only_odd_numbers(a,N,M)==1){
			for(i=1;i<=N;i++){
				if(check_column_containning_only_odd_numbers(a,M,i)==1){
					cout<<"the first column of the matrix contain only odd numbers: "<<i; break;
				}
			}
		}else{
			cout<<"0";
		}
	}
}
