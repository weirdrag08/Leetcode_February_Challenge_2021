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

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_map<char, int> s1_chars, s2_chars;
    string s, t;
    bool anagram = true;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        s1_chars[s[i]] += 1;
    }

    for(int i = 0; i < t.size(); i++){
        s2_chars[t[i]] += 1;
    }
    for(auto character : s2_chars){
        if(character.second != s1_chars[character.first] || s1_chars.size() != s2_chars.size()){
            cout << "false" << '\n';
            anagram = false;
            break;
        }
    }
    if(anagram){
        cout << "true" << '\n';
    }
}