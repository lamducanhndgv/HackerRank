#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> G;
vector<string> P;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool result = false;

		int R,C;
		cin>>R>>C;

		for(int i=0;i<R;i++)
		{
			string x;
			cin>>x;
			G.push_back(x);
		}

		int r,c;
		cin>>r>>c;

		for(int i=0;i<r;i++)
		{
			string x;
			cin>>x;
			P.push_back(x);
		}
		int count=0;
		for(int i=0;i<=R-r;i++)
		{
			for(int j=0;j<=C-c;j++)
			{
				if(G[i].substr(j,c).compare(P[0])==0){
					for(int k=1;k<r;k++)
					{
						if(G[i+k].substr(j,c).compare(P[k])==0) count++;
						if(count==r-1) result=true;
					}
				}
				count=0;
			}
			if(result) 
			{
				cout<<"YES"<<endl;
				break;
			}
		}
		if(!result) cout<<"NO"<<endl;
	}
	return 0;
}