#include <iostream>
#include <vector>
#define INF 9999999

using namespace std;

int main() {
    int V, E;
    cin >> V >> E;
    int v[401][401];
    
    for(int i = 0; i <= V; i++) {
        for(int j = 0; j <= V; j++) {
            v[i][j] = INF;
            if(i == j) v[i][j] = 0;
        }
    }
    
    for(int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b] = c;
    }
    
    for(int k = 1; k <= V; k++) {
        for(int i = 1; i <= V; i++) {
            for(int j = 1; j <= V; j++) {
                v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
            }
        }
    }
    
    int distance = INF;
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            if(i == j) continue;
            if(v[i][j] + v[j][i] < distance) {
                distance = v[i][j] + v[j][i];
            }
        }
    }
    
    if(distance >= INF) {
        cout << -1;
        return 0;
    }
    cout << distance;
}
