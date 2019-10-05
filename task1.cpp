#include<iostream>
using namespace std;
main(){
	int m,numberofrows,numberofcolumns,rposition,cposition,value,i,j;
	cout<<"Enter the size of the square matrix M(M>0): "; cin>>m;
	if(m<1){ cout<<"Error.";
	}else{
		int a[m][m];
		numberofrows=numberofcolumns=m;
		rposition=cposition=0;
		value=1;
		while(value<=m*m){
			for(i=numberofcolumns-1;i>=cposition;i--){ a[rposition][i]=value; value++;}
			for(i=rposition+1;i<numberofrows;i++){ a[i][cposition]=value; value++;}
			for(i=cposition+1;i<numberofcolumns;i++){ a[numberofrows-1][i]=value; value++;}
			for(i=numberofrows-2;i>rposition;i--){ a[i][numberofcolumns-1]=value; value++;}
			numberofrows--;numberofcolumns--;rposition++;cposition++;
		}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){ printf("%7d",a[i][j]);
			}
			cout<<"\n\n";
		}
	}
}

