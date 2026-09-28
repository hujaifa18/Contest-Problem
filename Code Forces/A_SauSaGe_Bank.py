t = int(input())
for i in range(t):
    inp = input()
    nums = inp.split()
    n = int(nums[0])
    k = int(nums[1])
    p = n - k + 1
    print(pow(2,p) + 2*(k-1))