#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;
int main() {
    int n;
    cin>>n;
    int f=0;
    
vector<bool> is_prime(n+1, true);
vector<int> primenums;
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
for (int u=0; u<=n; u++)
{
    if(is_prime[u]==1)
    {primenums.push_back(u);
    f++;}
}

for (int z=0; z<=f; z++)
{cout<<primenums.at(z);}

return 0;
}
