def linearSearch(arr,target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

def binarySearch(arr, target):
    low = 0
    high = len(arr) - 1;
    while low <= high:
        mid = (high + low) // 2
        if arr[mid] == target:
            return mid
        if arr[mid] > target:
            high = mid - 1
        else:
            low = mid + 1
    return -1

print(linearSearch([2,3,5,8,1],5))
print(binarySearch([4,8,10,12,14],13))

