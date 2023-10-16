def good_keys(N):
    prime = [True for i in range(N+1)]
    p = 2
    prime[1] = False

    while (p * p <= N):
        if (prime[p] == True):
            for i in range(p * p, N + 1, p):
                prime[i] = False
        p += 1
    cnt = 0

    for i in range(3, N + 1):
        if(prime[i] == True and (i ^ 2) <= N and i < i ^ 2 and prime[(i ^ 2)] == True):
            cnt += 1
    return cnt

N = int(input())

out_ = good_keys(N)
print(out_)

def shopping(N, L, R, cost):
    cnt = 0
    for i in range(len(cost)):
        if(cost[i] <= R and cost[i] >= L):
            cnt += 1
    
    return cnt

N = int(input())
L = int(input())
R = int(input())
cost = map(int, input().split())

out_ = shopping(N, L, R, cost)
print(out_)

SELECT u.users_email_id, u.users_name, x.event_name 
FROM users AS u
INNER JOIN (SELECT p.event_id, p.users_id 
FROM participation AS p
INNER JOIN events AS e
WHERE p.participtation_start_date >= '2022-01-01' AND p.participation_end_date <= '2022-01-31' 
AND e.event_start_date > '2021-11-30') AS x;

