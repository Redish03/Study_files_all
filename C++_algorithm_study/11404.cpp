#include <iostream>
#include <algorithm>
#define INF 9999999

using namespace std;

int arr[110][110];

int main() {
    int N, M; 
    cin >> N >> M;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            arr[i][j] = INF;
            if(i == j) arr[i][j] = 0;
        }
    }
    
    for(int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if(arr[a][b] != INF) {
            arr[a][b] = min(arr[a][b], c);
        }
        else {
            arr[a][b] = c;
        }
    }
    
    for(int k = 1; k <= N; k++) {
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
    
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(arr[i][j] == INF) {
                cout << "0 ";
                continue;
            }
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}
