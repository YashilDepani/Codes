#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define test(te) t(te); while(te--)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;


int main(int argc, char const *argv[])
{
	op;
	test(t)
	{
		t(n);
		t(s);
		lli arr[n];
		f(n)
		{
			cin>>arr[i];
		}
		lli sum=0;
		std::vector< pair<lli,lli> > v;
		bool flag=false;
		f(n)
		{
			sum+=arr[i];
			v.pb(mp(arr[i],i));
			if(sum>s){
				flag=true;
				break;
			}
		}
		if(flag==false || n==1){
			cout<<"0\n";
		}
		else
		{
			sort(v.rbegin(),v.rend());
			cout<<v[0].second+1<<endl;
		}

	}
	return 0;
}