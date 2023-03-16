#include<iostream>
using namespace std;
template <class T>
void bubblesort(T a[],int n){
	for (int i=0;i<n;i++){
		for (int j=n-1;i<j;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}
}
int main(){
	int c[10],p;
		cout<<"Enter the limit of digits to sort: ";
		cin>>p;
		cout<<"Enter the digits to sort: ";
		for (int k=0;k<p;k++){
			cin>>c[k];
		}
		bubblesort<int>(c,p);
		cout<<"Sorted array is:";
		for (int i=0;i<p;i++){
			cout<<c[i]<<" ";
		}
		
			cout<<endl;
			return 0;
}