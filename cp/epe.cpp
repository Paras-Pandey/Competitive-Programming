vector<int> answer = 0;

for(int i = 0; i <= orderplaced.size() - size; i++) {
    int j = i;
    for(; j < i + size; j++) {
        if(orderplaced[j] < 0)
            break;
    }
    if(i + size == j)
        answer.push_back(0);
    else
        answer.push_back(orderplaced[j]);
}

return answer;