#include<iostream>
using namespace std;
main(){
	double a[100][100];
	int r,c,i,j,column=0;
	cout<<"enter the number of rows: "; cin>>r;
	cout<<"enter the number of columns: "; cin>>c;
	if(r*c==0){ cout<<"error";
	}else{
		for(i=1;i<=r;i++){
			for(j=1;j<=c;j++){
				cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		cout<<"column contain the smallest value of the matrix: ";
		double min=a[1][1];
	    for(i=1;i<=r;i++){
	    	for(j=1;j<=c;j++){
	    		if(a[i][j]<=min){
	    			min=a[i][j];
	    			column=j;
	    			cout<<column<<" ";
	    		}
		    }
		}
		cout<<"\n";
		cout<<"minimum value of the matrix: ";
		cout<<min;
	}
}
