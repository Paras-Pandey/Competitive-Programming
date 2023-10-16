def calc_level_score(node, par, level, Val, adj, level_nodes, level_score):
    level_score[level] ^= Val[node]
    level_nodes[level].append(Val[node])
    max_level = level

    for child in adj[node]:
        if(child != par): 
            max_level = max(max_level, calc_level_score(child, node, level + 1, Val, adj, level_nodes, level_score))
    return max_level

def solve(N, Val, Edges):
    adj = [[] for _ in range(N)]
    for i in range(len(Edges)):
        adj[Edges[i][0] - 1].append(Edges[i][1] - 1)
        adj[Edges[i][1] - 1].append(Edges[i][0] - 1)

    level_score = [0] * (N - 1)
    level_nodes = [[] for _ in range(N - 1)]
    max_level = calc_level_score(0, -1, 0, Val, adj, level_nodes, level_score)

    for i in range(max_level + 1): 
        new_max = level_score[i]
        for node in level_nodes[i]:
            for j in range(max_level + 1):
                if(i == j):
                    continue
                for pot_node in level_nodes[j]:
                    new_max = max(new_max, level_score[i] ^ pot_node ^ node)
        level_score[i] = new_max
    return level_score

N = int(input())
Val = list(map(int, input().split()))
Edges = [list(map(int, input().split())) for i in range(N - 1)]

out_ = solve(N, Val, Edges)
print(' '.join(map(str, out_)))