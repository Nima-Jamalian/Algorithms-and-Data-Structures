inputArr = [2,1,1,1,1,3,3,3]
map = {}

for i in inputArr:
    if i in map:
        map[i] += 1
    else:
        map[i] = 1

sortedMap = sorted(map.items(), key=lambda x:x[1])

print(map)
print(sortedMap)

