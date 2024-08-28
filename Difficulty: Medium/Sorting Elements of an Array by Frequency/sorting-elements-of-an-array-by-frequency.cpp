 static bool comp(pair<int,int>&p1,pair<int,int>&p2){
        if(p1.first>p2.first){
            return true;
        }
        else if(p1.first==p2.first&&p1.second<p2.second){
            return true;
        }
        return false;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>ans;
        for(auto x:mp){
            ans.push_back({x.second,x.first});
        }
        sort(ans.begin(),ans.end(),comp);
        // reverse(ans.begin(),ans.end());
        vector<int>val;
        for(int i=0;i<ans.size();i++){
            int p=ans[i].first;
            while(p>0){
                val.push_back(ans[i].second);
                p--;
            }
        }
        return val;
    }
