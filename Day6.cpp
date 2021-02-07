  
#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

#define mp make_pair
#define INFI 10e8
#define INF 10e7

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef long long ll;

vector<int> rightSideView(TreeNode* root) {
        if(root == NULL){
            vector<int> base_v;
            return base_v;
        }
        queue<TreeNode*> q;
        vector<int> v;
        unordered_map<int, int> my_map;
        unordered_set<int> usi;
        int level = 0;
        q.push(root);
        my_map[root-> val] = level;
        while(!q.empty()){
            auto node_front = q.front();
            int front = node_front-> val;
            // cout<< front<<" "<<my_map[front]<<endl;
            q.pop();
            
            int parent_level = my_map[front];
            if(node_front-> right != NULL){
                q.push(node_front-> right);
                my_map[node_front-> right-> val] = parent_level + 1;
                if(my_map.count(node_front->right->val) > 0 && usi.find(my_map[node_front->right->val]) == usi.end()){
                usi.insert(my_map[node_front->right->val]);
                v.push_back(node_front->right->val);
            }
                 // cout<< front<<" "<<my_map[front]<<" "<<node_front->right->val<<" "<<my_map[node_front->right->val]<<endl;
            }
            
            if(node_front-> left != NULL){
                q.push(node_front-> left);
                my_map[node_front-> left-> val] = parent_level + 1;
                if(my_map.count(node_front->left->val) > 0 && usi.find(my_map[node_front->left->val]) == usi.end()){
                usi.insert(my_map[node_front->left->val]);
                v.push_back(node_front->left->val);
            }
                // cout<< front<<" "<<my_map[front]<<" "<<node_front->left->val<<" "<<my_map[node_front->left->val]<<endl;
            }
        }
        return v;
    }
    
    
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
