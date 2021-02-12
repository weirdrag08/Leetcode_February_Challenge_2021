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
    int n, count = 0;
    cin >> n;
    while(n != 0){
        if(n % 2 == 0){
            n = n >> 1;
        }
        else{
            n -= 1;
        }
        count++;
    }
    cout << count << '\n';
}