#include <iostream>
#include <algorithm>
using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + 2 * N);

    int sum[2000];

    for (int i = 0; i < N; i++)
    {
        //printf("%d", 2 + i);
        //printf("%d", 2 - (i + 1));
        sum[i] = nums[N + i] + nums[N - (i + 1)];
    }

    sort(sum, sum + N);

    printf("%d", sum[N - 1]);

    return 0;
}
