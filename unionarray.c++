vector<int> findUnion(vector<int>& a, vector<int>& b) {
    set<int> s;

    for(auto x : a)
        s.insert(x);

    for(auto x : b)
        s.insert(x);

    vector<int> ans;

    for(auto x : s)
        ans.push_back(x);

    return ans;
}