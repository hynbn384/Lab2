#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

int n;

void func(int cnt) {
    if (cnt < M) {
    	if ((M - cnt) == (n + 1)) {
	    	for (int i = N - n;i <= N;i++) {
		    	vec.push_back(i);
    		}
	    	for (int i = 0; i < M; i++) {
		    	cout << vec[i];
			    if (i == M - 1) cout << endl;
    			else cout << " ";
	    	}
    	}
    	else {
	    	vector<int> vec2 = vec;
		    vec.push_back(N - n);
    		n--;
	    	int m = n;
		    func(cnt + 1);

    		vec = vec2;
	    	n = m;
		    func(cnt);
    	}
    }
    else if (cnt == M) {
	    for (int i = 0; i < M; i++) {
		    cout << vec[i];
    		if (i == M - 1) cout << endl;
	    	else cout << " ";
   	    }
    }
}

int main() {
   cin >> N >> M;
   n = N-1;
   func(0);
}
