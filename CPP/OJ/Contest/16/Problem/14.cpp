#include <iostream>
#include <math.h>

using std::cin,std::cout,std::endl,std::sqrt;

int factCunt(int beCount){
	int hits = 2;
	int sqrted = sqrt(beCount);
	for (int i = 2;i<=sqrted;i++){
		if (beCount%i==0){
			hits += 2;
		}
	}
	if (sqrted*sqrted == beCount){
		hits -= 1;
	}
	
	return hits;
}

int f(int m, int t){
	int c = 0;

	for (int i=1;i<=m;i++){
		if (factCunt(i) == t){
			c++;
		}
	}
	
	return c;
}


int main(){
	int n,m;
	cin >> n >> m;
	cout << f(n,m);
}