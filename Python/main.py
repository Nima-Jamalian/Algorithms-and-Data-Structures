
# input = "nima jamalian"
# map = {}
# for char in input:
#     if char in map:
#         map[char] += 1
#     else:
#         map[char] = 1
# print(map)
# sortedMap = sorted(map.items(), key=lambda x:x[1])
# print(sortedMap)
# print("Most repeated character",sortedMap[len(sortedMap) - 1])

# # Python Program to solve stock buy and sell by  
# # exploring all possible pairs

# def max_profit(prices):
#     n = len(prices)
#     res = 0
#     # Explore all possible ways to buy and sell stock
#     for i in range(n - 1):
#         for j in range(i + 1, n):
#             res = max(res, prices[j] - prices[i])
    
#     return res

# if __name__ == "__main__":
#     prices = [7, 10, 1, 3, 6, 9, 2]
#     print(max_profit(prices))

# # def matrixElementFinder(arr, element):
# #     for i in range(0,len(arr)):
# #         for j in range(0,len(arr[i])):
# #             if arr[i][j] == element:
# #                 return [i,j]
# #     return -1;
# # inputData = [[1,2,3],[3,4,5],[6,7,8]]
# # print(matrixElementFinder(inputData,3))

# # userName = input("Enter Your User Name?")
# # age = input("What is your age?")
# # print("Hello, " + userName)
# # input = "nima jamalian"
# # inputArr = list(input)
# # inputArr[0] = "z"
# # print("".join(inputArr))
# # map = {}
# # for char in input:
# #     if char in map:
# #         map[char] += 1
# #     else:
# #         map[char] = 1
# # sortedMap = sorted(map.items(), key=lambda x:x[1])


data = "hello"
target = "l"
result = []
for i in range(len(data)):
    if target == data[i]:
        result.append(i)
print(result)


input = input("What is your name?")
print("Hello", input)
