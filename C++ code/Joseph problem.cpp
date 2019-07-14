#include<bits/stdc++.h>
using namespace std;
int m,n,i,j,t;
bool a[10005];
int main()
{
	memset(a,true,sizeof(a));
	cin >> m >> n;
	i=1;
	j=0;
	t = m;
	while(t)
	{
		if(i==m+1) i=1;
		if(a[i])
		{
			j++;
			if(j==n)
			{
				a[i]=false;
				cout << i <<" ";
				j=0;
				t--;
			}
		}
		i++;
	}
	return 0;
}

