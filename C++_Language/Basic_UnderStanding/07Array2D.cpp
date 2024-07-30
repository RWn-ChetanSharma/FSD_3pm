#include<iostream>
using namespace std;

int main(){

	int arr[3][3] = {
						{4,2,3},
						{1,2,3},
						{7,8,9}
					};
					
					
//	cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
//	cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
//	cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j] << " ";
		}
		cout<< endl;
	}


}
