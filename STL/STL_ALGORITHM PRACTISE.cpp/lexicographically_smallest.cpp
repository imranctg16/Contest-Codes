    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	 int t,i;
    	scanf("%d",&t);
    	while(t--){
    		string s,ans="";
    		cin>>s;
    		for(i=0;i<s.length();i++)
    			ans=max(ans,(s.substr(i,s.length())+s.substr(0,i)));
    	    cout<<ans<<endl;
    	}
    	return 0;
    }
