#include<iostream>
#include<cmath>
using namespace std;
main(){
	int n,numberofrows,numberofcolumns,rposition,cposition,value,i,j;
	cout<<"enter the size of the square matrix n(odd numeber): "; cin>>n;
	if(n%2==0){ cout<<"error(please enter odd number)";
	}else{
	int a[n][n];
	    numberofrows=numberofcolumns=n;
		rposition=cposition=0;
		value=1;
	    while(value<=pow(n,2)){
	    	for(i=numberofcolumns-1;i>=cposition;i--){ a[rposition][i]=value; value++;}
		    for(i=rposition+1;i<numberofrows;i++){ a[i][cposition]=value; value++;}
		    for(i=cposition+1;i<numberofcolumns;i++){ a[numberofrows-1][i]=value; value++;}
		    for(i=numberofrows-2;i>rposition;i--){ a[i][numberofcolumns-1]=value; value++;}
		    numberofrows--;numberofcolumns--;rposition++;cposition++;
	    }
	    for(i=0;i<n;i++){
	    	for(j=0;j<n;j++){
	    	cout<<a[i][j]<<" ";
	    }
	    	cout<<"\n\n";
	    }
	}
}
