#include <iostream>
#include <vector>

int main()
{
    // 좌석 정보 입력받기
    // answer는 컵을 놓을 수 있는 사람 수. 맨 왼쪽 자리에는 무조건 놓을 수 있으므로 1로 시작.
    int N, answer = 1;
    std::string seat;
    std::cin >> N >> seat;

    // 반복문
    for (int i = 0; i < N; i++)
    {
        if (seat[i] == 'L')
        {
            i++;
            answer++;
        }
        else
        {
            answer++;
        }
        // 좌석 수와 컵을 놓을 수 있는 사람 수가 동일하면 반복문 탈출
        // 컵을 놓을 수 있는 개수와 상관없이 때문에 해당 구문이 없으면 최대로 놓을 수 있는 컵 개수를 출력
        if (answer == N)
            break;
    }
    // 답 출력
    std::cout << answer;
    return 0;
}