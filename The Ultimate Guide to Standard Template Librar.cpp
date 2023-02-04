#include <iostream>
#include <vector>
#include <string>
int main (int argc, char *argv[])
{
std::vector <std::string> projects;
std::cout << "program name:"
<< argv[0] << std::endl;
for (int i = 1; i < argc; ++i) {
projects.push_back (argv [i]);
std::cout << projects [i - 1]
<< std::endl;
}
return 0;
}

#include <deque>
#include <iostream>
#include <iterator>
#include <algorithm>
int main() {
std::deque<int> a_deck;
a_deck.push_back (3);
a_deck.push_front (1);
a_deck.insert (a_deck.begin () + 1, 2);
a_deck[2] = 0;
std::copy (a_deck.begin (), a_deck.end (),
std::ostream_iterator<int>
(std::cout, " "));
return 0;
}

#include <list>
#include <iostream>
#include <iterator>
#include <string>
int main() {
std::list<std::string> a_list;
a_list.push_back ("banana");
a_list.push_front ("apple");
a_list.push_back ("carrot");
std::ostream_iterator<std::string> out_it
(std::cout, "\n");
std::copy (a_list.begin (), a_list.end (), out_it);
std::reverse_copy (a_list.begin (), a_list.end (),
out_it);
std::copy (a_list.rbegin (), a_list.rend (), out_it);
return 0;
}
