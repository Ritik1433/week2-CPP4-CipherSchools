#include <iostream>
#include <iterator>
#include <set>
int main () {
std::set<int> myset;
for (int i = 1; i <= 5; i++) myset.insert (i*10);
std::pair<std::set<int>::iterator,bool> ret =
myset.insert (20);
assert (ret.second == false);
int myints[] = {5, 10, 15};
myset.insert (myints, myints + 3);
std::copy (myset.begin (), myset.end (),
std::ostream_iterator<int> (std::cout, "\n"));
return 0;
}

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
typedef std::map<std::string, int> My_Map;
struct print {
void operator () (const My_Map::value_type &p)
{ std::cout << p.second << " "
<< p.first << std::endl; }
};
int main() {
My_Map my_map;
for (std::string a_word;
std::cin >> a_word; ) my_map[a_word]++;
std::for_each (my_map.begin(),
my_map.end(), print ());
return 0;
}