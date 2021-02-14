/*普通的斐波那契递归解法 O(2^n)*/
int RecursiveFibonacci(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2);
}

/*动态规划 空间复杂度O(n)*/
int dpFibonacci(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int *dp = new int[n+1];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];

	delete[] dp;
}

/*改进动态规划*/
int fibonacci(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int  back=0, font = 1, res=1;
	for (int i = 2; i <= n; i++)
	{
		res = font + back;
		back = font;
		font = res;
	}
	return res;
}