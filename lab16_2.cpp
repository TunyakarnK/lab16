#include<iostream>
using namespace std;

void myString(char *&p, int N){
	static char *temp = new char[N];    
	for(int i = 0; i < N;i++) temp[i] += 'A'+i;
	 p = temp; temp =0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
