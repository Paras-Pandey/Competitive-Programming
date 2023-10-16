int memServer1(array_single_int req) {
    int answer;
    for(int i = 0; i < req.size; i += 2) {
        answer += req.data[i];
    }

    return answer;
}

array_single_int calculatePrimeNumbers(int num) {
    array_single_int answer;

    int *prime = (int*)malloc((num + 1) * sizeof(int));

    for(int i = 2; i <= num; i++) {
        prime[i] = 0;
    }

    for(int i = 2; i * i <= num; i++) {
        if(prime[i] == 1)
            continue;
        for(int j = i * i; j <= num; j += i) {
            prime[j] = 1;
        }
    }

    int s = 0;
    for(int i = 2; i <= num; i++) {
        if(prime[i] == 0)
            s++;
    }

    answer.size = s;
    answer.data = (int*)malloc(s * sizeof(int));

    for(int i = 2, j = 0; i <= num; i++) {
        if(prime[i] == 0) {
            answer.data[j] = i;
            j++;
        }
    }

    return answer;
}

int minProject(vector<int> errorScore, int compP, int othQ) {
    priority_queue<pair<int, int>> pq;

    int answer = 0;
    
    for(int i = 0; i < (int)errorScore.size(); i++)
        pq.push({errorScore[i], i});

    unordered_map<int, int> dec;
    int total = 0;

    while(pq.size()) {
        auto maxe = pq.top();
        pq.pop();

        if(maxe <= total - dec[maxe.second])
            continue;
        maxe.first -= compP;
        total++;
        dec[maxe.second]++;

        if(maxe.first > 0)
            pq.push(maxe);

        answer++;
    }

    return answer;
}