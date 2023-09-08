//#include <iostream>
//using namespace std;
//int main(){
//	int i;
//	while(i<=10){
//		cout<<i<<" ";
//		i++;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int r,c,i=1;
//	cout<<"enter rows"<<" ";
//	cin>>r;
//	while(i<=r){
//		c=1;
//		while(c<=r){
//			cout<<c;
//			c++;
//		}
//		cout<< endl;
//		i++;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int main(){
	int r,c=1,i=1;
	cout<<"enter rows"<<" ";
	cin>>r;
	while(i<=r){
		while(c<=r*r){
			cout<<c;
			c++;
		}
		cout<< endl;
		i++;
	}
	return 0;
}
