#include <iostream>
using namespace std;
//202131145
int main(){
	int A[] ={1,3,5};
	int B[] = {2,4,6,8,10,12};
	int C[(sizeof(A)/4) + (sizeof(B)/4)];
	
	for(int i = 0; i < (sizeof(A)/4); i++){
		C[i] = A[i];
	}
	for(int i = 0; i < (sizeof(B)/4); i++){
		C[i + (sizeof(A)/4)] = B[i];
	}
	
	cout << "Hasil Merge = ";
	for(int i = 0; i < sizeof(C)/4; i++){
		if(i == (sizeof(C)/4) - 1){
			cout << C[i];
			break;
		}
		cout << C[i] << ",";
	}
	cout << endl;
	for(int i = 0; i < (sizeof(C)/4) - 1; i++){
		for (int j = 0; j < (sizeof(C)/4) - 1; j++){
			if(C[j] > C[j+1]){
				int temp = C[j];
				C[j] = C[j+1];
				C[j+1] = temp;
			}
		}
	}
	cout << "Hasil Sort = ";
	for(int i = 0; i < sizeof(C)/4; i++){
		if(i == (sizeof(C)/4) - 1){
			cout << C[i];
			break;
		}
		cout << C[i] << ",";
	}
	
}
