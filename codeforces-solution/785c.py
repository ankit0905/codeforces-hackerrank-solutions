(n,m) = map(int, input().split())
if m >= n:
	print(n)
else:
	(lo, hi) = 0, int(2e9)
	ans = 0
	while lo < hi:
		mid = (lo + hi) // 2
		tmp = mid*(mid+1) // 2
		if n-m-tmp <= 0:
			hi = mid
		else:
			lo = mid+1
	print(lo + m)
