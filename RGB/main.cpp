#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> Tri[20000];

int main() {
	int n, i, y, num, x=0, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			cin >> num;
			Tri[i].push_back(num);    
		}
	}
	
	for (y = n - 2; y >= 0; y--) {        //아래서부터 올라온다.
		for (x = 0; x < Tri[y].size(); x++) {       //열의 크기만큼 반복한다
			Tri[y][x] += max(Tri[y+1][x], Tri[y+1][x + 1]);     //더 큰 수를 더해준다.
			}
	}
	
	cout << Tri[0][0];

}
	



	
	
	

