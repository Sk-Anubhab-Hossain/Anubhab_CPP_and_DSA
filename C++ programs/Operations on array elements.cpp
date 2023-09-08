//#include <iostream>
//using namespace std;
//int main(){
//	int arr[5]={0};
//	float avg=0, sum=0;
//	cout<<"Enter 5 inputs"<<endl;
//	for(int i=0;i<5;i++){
//		cout<<"Enter "<<i+1<<" number : ";
//		cin>>arr[i];
//		sum=sum+arr[i];
//		avg=sum/5;
//	}
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<endl;
//	}
//	cout<<"Sum of the elements in array is: "<<sum<<endl;
//	cout<<"Average of the elements in array is: "<<avg<<endl;
//	return 0;
//}

#include <iostream>
using namespace std;

int getMin(int num[], int size){
	int min=INT_MAX;
	for (int a=0;a<size;a++){
		if (num[a]<min){
			min=num[a];
		}
	}
	return min;
}

void getMax(int num[], int size){
	int max=INT_MIN;
	for (int a=0;a<size;a++){
		if (num[a]>max){
			max=num[a];
		}
	}
	cout<<"Maximum element is: "<<max<<endl;
}

int main(){
	int size;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	int arr[100];
	for (int i=0;i<size;i++){
		cout<<"enter "<<i+1<<" number : ";
		cin>>arr[i];
	}
	cout<<"Minimum element is: "<<getMin(arr, size)<<endl;
	getMax(arr, size);
	return 0;
}
