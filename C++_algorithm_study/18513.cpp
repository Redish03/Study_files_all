#include <iostream>
#include <queue>
#include <set>
using namespace std;

int n, k;
set<int> se;
queue<int> q; 
int dir[2] = { 1,-1 };
long long result;

void bfs() {
	int dis = 0;
	while (!q.empty()) {
		int size = q.size();
		dis++; //거리 증가
		for (int i = 0; i < size; i++) {
			int cur = q.front(); //가장 앞에 있는 값을 넣어줌
			q.pop();

			for (int j = 0; j < 2; j++) {
				int next = cur + dir[j];
				if (se.count(next)==0) {
					q.push(next);
					se.insert(next);
					result += dis;
					if (--k == 0) {
						return;
					}
				}
			}
		}
	}
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		se.insert(a);
		q.push(a);
	}
	bfs();
	cout << result;
	return 0;
}



/*
set이 무엇인가?
queue, deque와 같은 컨테이너.
기본적으로 오름차순으로 정렬되고
유일성을 가져서 중복제거에 많이 쓰인다.

이 문제에선 음수양수 신경 쓸 필요 없이
set에 값이 들어가 있지 않으면 탐색(집 짓기)을 계속 진행하면 된다.
원소의 개수가 적고 빠른 성능을 원하면 unordered_set,
원소의 개수가 많고 안정성을 원하면 set을 사용하자!

*/