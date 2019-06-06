using namespace std;
#include<iostream>
#include<map>
#include<set>

int main()
{

  int N;

  cin >> N;
  int point;
  string city;
  multimap<pair<string, int>, int> a;

  for(int i=0;i<N;i++)
  {
    cin >> city >> point;
    a.insert(make_pair(city,point));
  }


  multiset<pair<string, int> > b;

  for (auto const& entry: b)
  {
    cout << entry.first << entry.second;
  }

  return 0;
}
