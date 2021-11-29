#include<iostream>
using namespace std;
void sort(int [],int);  
void sort2(int *,int);
void swap(int,int);
int main(){
	int myArray[]={8,9,4,5,3,7,1,2};  
	int length=sizeof(myArray)/sizeof(int);
	sort(myArray,length);  
//	sort2(myArray,length);
	for(int i=0; i<length; i++)
		cout<<myArray[i]<<"\t";
}
void sort(int a[],int n){
	int temp;
	for(int i=0; i<n; i++)
		for(int j=0;j<n-1; j++){
			
			if(a[j]>a[j+1]){
			
			    temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
}

void sort2( int* ptr, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                temp = *(ptr + i);  
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}
