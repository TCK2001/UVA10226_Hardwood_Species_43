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
	int n; //�� ������ map���� Ǫ�°Ͱ���....vector �� �ϸ��� �̻��ϰ� ���� �ѹ� �ۿ� �Է��� ���ؼ� �� �׷������� �𸣰ھƼ�.....; 
	string in;
	cin>>n;
	getline(cin,in); //Ƚ�� �ڿ� ����; 
	getline(cin,in); //Ƚ�� �Է��� �����Է�; 
	while(n--)
	{
		map<string,int> hi;
		double count=0;
		while(getline(cin,in)&&in!="") //���� �Ǵ� �Է��Ѱ� ���� �ִ��� ������ �ƴ���; 
		{
			hi[in]++;
			count++;
		}
		for(map<string,int>::iterator i=hi.begin();i!=hi.end();i++) //���� ���; 
		{
			cout<<i->first<<" "<<fixed<<setprecision(4)<<i->second/count*100<<endl; //�Ҽ��� 4�ڸ� �� ���� ���; 
		}
		if(n)
		{
			cout<<endl; //�� �������� �� �ٲٱ�; 
		}
	}
}






// �ؿ� ����� vector�� ���� �Է��� ���� , ������ �ؼ� count�� ���ϰ� ����ϴ� �ǵ� �� �ѹ� �̻� ������ �� �ϴ��� �𸣰���....; 
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
