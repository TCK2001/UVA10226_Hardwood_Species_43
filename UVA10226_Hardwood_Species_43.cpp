/*
Sample Input
1
Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow
Sample Output
Ash 13.7931
Aspen 3.4483
Basswood 3.4483
Beech 3.4483
Black Walnut 3.4483
Cherry 3.4483
Cottonwood 3.4483
Cypress 3.4483
Gum 3.4483
Hackberry 3.4483
Hard Maple 3.4483
Hickory 3.4483
Pecan 3.4483
Poplan 3.4483
Red Alder 3.4483
Red Elm 3.4483
Red Oak 6.8966
Sassafras 3.4483
Soft Maple 3.4483
Sycamore 3.4483
White Oak 10.3448
Willow 3.4483
Yellow Birch 3.4483
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
	int n; //이 문제는 map으로 푸는것같음....vector 로 하면은 이상하게 값을 한번 밖에 입력을 못해서 왜 그러는지를 모르겠아서.....; 
	string in;
	cin>>n;
	getline(cin,in); //횟수 뒤에 공백; 
	getline(cin,in); //횟수 입력후 공백입력; 
	while(n--)
	{
		map<string,int> hi;
		double count=0;
		while(getline(cin,in)&&in!="") //이제 판단 입력한게 값이 있는지 없는지 아닌지; 
		{
			hi[in]++;
			count++;
		}
		for(map<string,int>::iterator i=hi.begin();i!=hi.end();i++) //이제 출력; 
		{
			cout<<i->first<<" "<<fixed<<setprecision(4)<<i->second/count*100<<endl; //소수점 4자리 수 까지 출력; 
		}
		if(n)
		{
			cout<<endl; //안 끝났으면 줄 바꾸기; 
		}
	}
}






// 밑에 방법은 vector로 값을 입력한 다음 , 정렬을 해서 count를 구하고 출력하는 건데 왜 한번 이상 실행을 못 하는지 모르겠음....; 
/*
int main()
{
	int n;
	vector<string> save;
	string in;
	cin>>n;

	while(n--)
	{
		save.clear();
		getline(cin,in);	
		getline(cin,in);
		
		while(getline(cin,in)&&in!="")
		{
			save.push_back(in);
		}
	
		sort(save.begin(),save.end());
		
		double sum=0,p,count=1;
		sum=save.size();
		
		for(int i=0;i<sum;i++)
		{
			if(i==sum-1)
			{
			
				p=(count/sum)*100;	
				cout<<fixed<<setprecision(4)<<save[sum-1]<<" "<<p<<endl;	
			}
			if(save[i]==save[i+1])
			{
				count++;
			}
			else if(save[i]!=save[i+1])
			{
				p=(count/sum)*100;	
				cout<<fixed<<setprecision(4)<<save[i]<<" "<<p<<endl;
				count=1;	
			}
		}
		if(n)
		{
			cout<<endl;	
		}
	}
return 0;
}
*/
