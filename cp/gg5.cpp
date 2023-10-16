 #include"bits/stdc++.h"
 using namespace std;

 int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    stack<int> st;
    
    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--) {
        while(st.size() && arr[st.top()] <= arr[i])
            st.pop();
        
        if(st.size() == 0)
            ans[i] = 0;
        else    
            ans[i] = st.top() - i;
        st.push(i);
    }

    for(int i = 0; i < n; i++)
        cout<<ans[i]<<" ";
    cout<<endl;
 }