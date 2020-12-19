class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int S, int T) {
        // create hash map that stores: stop id -> buses that can archieve 
        unordered_map<int, vector<int>> mp;         
        for(int i=0; i<routes.size(); i++){
            auto& rt = routes.at(i); 
            for(auto& stop:rt) mp[stop].push_back(i); 
        }
        int cnt=0;                  // count of layers BFS is expaned
        unordered_set<int> visited_stop, used_bus; 
        queue<int> que;             // queue that stores bus id 
        que.push(S);
        visited_stop.insert(S); 
        
        while(!que.empty()){
            int sz = que.size();
            for(int k=0; k<sz; k++){
                int stop = que.front(); que.pop();    // extract current stop 
                if(stop==T) return cnt; 
                for(auto& bus:mp[stop]){              // take a bus from the stop 
                    if(used_bus.count(bus)) continue;
                    used_bus.insert(bus); 
                    for(auto& stop:routes[bus]){      // get off at every stop 
                        if(!visited_stop.count(stop)){
                            que.push(stop); 
                            visited_stop.insert(stop); 
                        }
                    }
                }
            }
            cnt++;
        }
        return -1; 
    }
};
