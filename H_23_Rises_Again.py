from itertools import combinations

# Helper to check if a set of edges form a valid "candy graph"
def is_valid_candy_graph(n, edge_set):
    degree = [0] * n
    parent = list(range(n))
    cycle_found = [False] * n

    def find(u):
        while u != parent[u]:
            parent[u] = parent[parent[u]]
            u = parent[u]
        return u

    def union(u, v):
        pu, pv = find(u), find(v)
        if pu == pv:
            if cycle_found[pu]:
                return False  # second cycle in same component
            cycle_found[pu] = True
        else:
            if cycle_found[pu] and cycle_found[pv]:
                return False
            parent[pu] = pv
            cycle_found[pv] |= cycle_found[pu]
        return True

    for u, v in edge_set:
        if degree[u] == 2 or degree[v] == 2:
            return False
        if not union(u, v):
            return False
        degree[u] += 1
        degree[v] += 1

    return True

# Brute force search for max valid subset of edges for a single test case
def max_candy_graph_edges(n, edges):
    m = len(edges)
    max_edges = 0
    for r in range(m + 1):
        for subset in combinations(edges, r):
            if is_valid_candy_graph(n, subset):
                max_edges = max(max_edges, r)
    return max_edges

# Sample test case from problem
test_cases = [
    (4, [(0,1),(0,2),(1,2),(2,3)]),
    (7, [(0,1),(0,2),(0,3),(1,3),(2,3),(3,4),(3,5),(4,5),(4,6),(5,6)]),
    (9, [(0,1),(0,2),(2,3),(2,6),(3,4),(3,5),(4,5),(6,7),(6,8),(7,8)])
]

# Apply
results = [max_candy_graph_edges(n, edges) for n, edges in test_cases]
results
