#include <iostream>
using namespace std;

const int MAX_N = 101;
const int HEALTHY = 3;
const int F2 = 2;
const int F1 = 1;
const int F0 = 0;

int N;
int status[MAX_N];             // trạng thái của mỗi người
int contact[MAX_N][MAX_N];     // ma trận tiếp xúc

// Đánh dấu người tiếp xúc cấp độ kế tiếp
void check(int level) {
    for (int i = 1; i <= N; i++) {
        if (status[i] != level)
            continue;
        for (int j = 1; j <= N; j++) {
            if (contact[i][j] == 1 && status[j] == HEALTHY) {
                status[j] = level + 1;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++) {
        int M, tmp;
        cin >> N >> M;

        // Đặt lại trạng thái tất cả là khỏe mạnh
        for (int i = 1; i <= N; ++i)
            status[i] = HEALTHY;

        // Nhập ma trận tiếp xúc
        for (int i = 1; i <= N; ++i)
            for (int j = 1; j <= N; ++j)
                cin >> contact[i][j];

        // Nhập danh sách người F0
        for (int i = 0; i < M; ++i) {
            cin >> tmp;
            status[tmp] = F0;
        }

        // Đánh dấu F1 và F2
        check(F0);
        check(F1);

        // Đếm số lượng F1 và F2
        int cntF1 = 0, cntF2 = 0;
        for (int i = 1; i <= N; i++) {
            if (status[i] == F1)
                cntF1++;
            else if (status[i] == F2)
                cntF2++;
        }

        cout << "#" << test_case << " " << cntF1 << " " << cntF2 << endl;
    }

    return 0;
}
