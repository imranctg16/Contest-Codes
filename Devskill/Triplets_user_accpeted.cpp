#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    scanf("%d",&t);
    for(int tc = 1; tc <= t; tc++) {
        scanf("%d",&n);
        int x, sum = 0, temp, zero = 0, mx = -1;
        map<int,int> m;
        for(int i = 0; i < n; i++) {
            scanf("%d",&x);
            if(x) m[x]++;
            else zero++;
        }
        if(zero > 2) sum += zero*(zero-1)*(zero-2)/6;
        for(map<int,int>::iterator i = m.begin(); i != m.end(); ++i) {
            temp = i->second;
            if(temp > 1) {
                x = i->first << 1;
                temp = temp * (temp-1) / 2;
                if(zero) sum += temp * zero;
                if(m.find(x)!=m.end()) sum += temp * m[x];
            }
            map<int,int>::iterator j = i;
            ++j;
            for(; j != m.end(); ++j) {
                temp = i->second * j->second;
                x = i->first + j->first;
                if(m.find(x)!=m.end()) sum += temp*m[x];
            }
        }
        printf("Case %d: %d\n",tc,sum);
    }
}
