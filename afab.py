import collections

def bfs(A, it1, it2, k, totalCount):
    cordinatesOfHouse = ((0,1),(1,0),(0,-1),(-1,0))
    queue = collections.deque([(it1,it2,k)])
    vis = set()
    
    while len(queue) != 0:
        for _ in range(len(queue)):
            it1, it2, k = queue.popleft()
            
            if (it1,it2) not in vis:
                vis.add((it1,it2))
                totalCount[it1][it2] += 1
            
            for direction in cordinatesOfHouse:
                new_i, new_j, new_k = it1 + direction[0], it2 + direction[1], k-1
                
                if 0 <= new_i < len(A) and 0 <= new_j < len(A[0]) and new_k >= 0 and (new_i, new_j) not in vis:
                    queue.append((new_i,new_j,k-1))

def solution(K, A):
    m, n = len(A), len(A[0])
    totalCount = [[0 for _ in range(n)] for _ in range(m)]
    houseCount = 0
    homeCoordinates = set()
    finalAns = 0
    
    for it1 in range(m):
        for it2 in range(n):
            if A[it1][it2] == 1:
                bfs(A, it1, it2, K, totalCount)
                houseCount += 1
                homeCoordinates.add((it1,it2))
    
    for it1 in range(m):
        for it2 in range(n):
            if totalCount[it1][it2] == houseCount and (it1,it2) not in homeCoordinates:
                finalAns += 1
    
    return finalAns