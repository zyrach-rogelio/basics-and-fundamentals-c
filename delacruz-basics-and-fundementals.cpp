#include<iostream>
using namespace std;

int main()
{
	
	const int size=10;
		int arrNum1[size], arrNum2[size], arr3[size * 2];
			int i,j,total;
			
		
		cout<<"Enter 10 elements for Set 1: ";
	
	for(i=0;i<size;++i)
	{
		
		cout<<"\nElement"<<i+1<<": ";
			cin>>arrNum1[i];
		
	}
	
		cout<<"\nEnter 10 elements for Set 2: ";
		
		
	for(i=0;i<size;++i){
		
		cout<<"\nElement"<<i+1<<": ";
			cin>>arrNum2[i];
	}
	
	for(i=0;i<size;++i)
	{	
		arr3[i] = arrNum1[i];
			arr3[i + size] = arrNum2[i];
	}
	
	total = size * 2;
	
	for(i=0;i<total;++i){
	
	// Finally fixed the code
	
		for(j=0; j < total - 1; ++j){ 
			
			if(arr3[j] < arr3[j + 1]){								
				
				int temp = arr3[j];
					arr3[j] = arr3[j+1];
						arr3[j+1] = temp;
		}
		
		}
		
		}
	
	cout<<"\n\nSorted elements of the array (Descending):";
		for(i=0;i<total;++i){
		
			cout<<arr3[i]<<" ";
			
		}
			return 0;
}





