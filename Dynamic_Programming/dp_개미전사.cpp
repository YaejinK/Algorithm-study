//�迭���� �������� �ʴ� ���ڵ��� �ִ� �� ���ϱ�

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int arr[100] = { 0, }, k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr[i] = k;
	}

	int dp[100] = { 0, };
	dp[0] = arr[0];
	dp[1] = max(arr[0], arr[1]);
	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
	}
	cout << dp[n-1];
}