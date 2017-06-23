x,y,l,r = [int(i) for i in input().split()]
i = j = a = b = 0
numx = [] 
numy = []
while a <= r:
	a = x**i
	i += 1
	numx.append(a)
while b <= r:
	b = y**j
	j += 1
	numy.append(b)
#print(numx, numy)
nums = set()
for i1 in numx:
	for j1 in numy:
		s = i1 + j1
		if s > r:
			break
		nums.add(s)
nums = list(nums)
init = l
ans = 0
nums = sorted(nums)
le = len(nums)
#print(nums)
if le == 0:
	ans = r-l+1
for it in range(len(nums)):
	if it == 0:
		if nums[it] >= l and nums[it] <= r:
			ans = min(nums[it],r)-l
		elif nums[it] > r:
			ans = r-l+1
			break
	else:
		if nums[it] >= l and nums[it] <= r:
			if nums[it-1] < l:
				ans = max(ans, min(nums[it],r)-l)
			else:
				ans = max(ans, min(nums[it],r)-nums[it-1]-1)
try:
	if nums[le-1] < l:
		ans = r-l+1
	elif nums[le-1] >= l:
		ans = max(ans, r-nums[le-1])
except:
	pass
print(ans)	 
'''
2 3 1 1 => 1
2 3 2 3 => 0
2 3 1 10 => 1
5 7 13 20 => 8
'''
