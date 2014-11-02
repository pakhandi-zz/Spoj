//Author : pakhandi
//
using namespace std;

#include<bits/stdc++.h>

#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int

#define PB push_back
#define SZ size

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	ll n, dec;
	scan(cases);
	wl(cases)
	{
		cin>>n;
		string str1;
		str1.clear();
		while(n>0)
		{
			dec=n%5;
			if(dec!=0)
				n=(n/5);
			else
				n=(n/5)-1;
			switch(dec)
			{
				case 1 : str1+="m";
				break;
				case 2 : str1+="a";
				break;
				case 3 : str1+="n";
				break;
				case 4 : str1+="k";
				break;
				case 0 : str1+="u";
				break;
			}
			//cout<<str1;nline;
		}
		reverse(str1.begin(), str1.end());
		cout<<str1;
		nline;
	}
	
	return 0;
}

