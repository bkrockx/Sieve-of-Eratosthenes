#include <bits/stdc++.h>
using namespace std;
#define max 10000
bool isPrime[10001];
vector<int>v;
int main()
{
    long long int i,j;
        isPrime[0]=isPrime[1]=false;
        for(i=2;i<max;i++){
                isPrime[i]=true;
        }       
        for(i=2;i<=sqrt(max);i++){
                if(isPrime[i]){
                        for(j=i*i;j<max;j+=i)
                                isPrime[j]=false;
                }
        }
    vector<int>v;
    int num;
    cin >> num;
        for(i=2;i<=num;i++){
                if(isPrime[i])
                        v.push_back(i);
        }
    for(i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
} 
