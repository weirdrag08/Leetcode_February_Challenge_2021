#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<stack>
#include<queue>
#include<climits>
#include<string>
#include<algorithm>
#include<utility>
using namespace std;

#define mp make_pair
#define INFI 10e8
#define INF 10e7

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef long long ll;

/*Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).*/


int hammingWeight(uint32_t n){
    int count = 0;
    for (int i = 0; n != 0; i++){
        if (n % 2 == 1)
        {
            count++;
        }
        n = n >> 1; // * or you can just write n /= 2;  Binary is based on base2, so we took modulus and divided the number by 2.(Similar to what we do in normal base10 system)
    }
    return count;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    uint32_t n;
    cin >> n;
    cout << hammingWeight(n) << '\n';
}