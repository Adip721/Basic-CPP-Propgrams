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
vector<int> vec1;
vector<int> vec3;
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
for(int k=6;k<=n;k++)
{
    int count = 0;
    vec1.clear();
    for (int z=2;z<=(k);z++)
    {
        if(k%z==0)
        {vec1.push_back(z);}
    }
    for(int p=0;p<primenums.size();p++)
    {for(int q=0;q<vec1.size();q++)
        {
            if (vec1.at(q)==primenums.at(p))
            count++;
        }

        
    }
    if(count==2)
        vec3.push_back(k);
}
cout<<vec3.size();
return 0;
}
