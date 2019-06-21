#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <array>
#include <set>
#include <deque>
#include <forward_list>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <list>

//new comment+
using namespace std;

template<typename S>
void print(const S &s) {
    for (const auto &p : s) {
        cout << "(" << p << ") ";
    }
    cout << endl;
}


void map_fun() {
    typedef std::map<int, std::set<std::string>> map_type;
    map_type foo = {{1, std::set<std::string>{std::string("cat"), std::string("dog"), std::string("doe")}},
                    {3, std::set<std::string>{std::string("goose"), std::string("moose"), std::string("ruse")}}};


}

void vector_fun() {
    std::vector<std::string> words1{"the", "frogurt", "is", "also", "cursed"};
    std::vector<std::string> words2(words1.begin(), words1.end());
    std::vector<std::string> words3(words1);
    std::vector<std::string> words4(5, "Mo");

    vector<int> a;  //error here under int
    a.push_back(5);
    a.push_back(8);
    cout << a[0] << endl;
}


void array_fun() {
    typedef std::array<int, 4> Myarray;
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
         it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1(c0);

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c1.begin();
         it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

}

int deque_fun() {
    using namespace std;
    deque<int> c1, c2;
    deque<int>::const_iterator cIter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    deque<int> d1{1, 2, 3, 4};
    initializer_list<int> iList{5, 6, 7, 8};
    d1.assign(iList);

    cout << "d1 = ";
    for (int i : d1)
        cout << i;
    cout << endl;

    cout << "c1 =";
    for (int i : c1)
        cout << i;
    cout << endl;

    c1.assign(++c2.begin(), c2.end());
    cout << "c1 =";
    for (int i : c1)
        cout << i;
    cout << endl;

    c1.assign(7, 4);
    cout << "c1 =";
    for (int i : c1)
        cout << i;
    cout << endl;

}

int forwardlist_fun() {
    forward_list<int> c1{10, 11};
    forward_list<int> c2{20, 21, 22};
    forward_list<int> c3{30, 31};
    forward_list<int> c4{40, 41, 42, 43};

    forward_list<int>::iterator where_iter;
    forward_list<int>::iterator first_iter;
    forward_list<int>::iterator last_iter;

    cout << "Beginning state of lists:" << endl;
    cout << "c1 = ";
    print(c1);
    cout << "c2 = ";
    print(c2);
    cout << "c3 = ";
    print(c3);
    cout << "c4 = ";
    print(c4);

    where_iter = c2.begin();
    ++where_iter; // start at second element
    c2.splice_after(where_iter, c1);
    cout << "After splicing c1 into c2:" << endl;
    cout << "c1 = ";
    print(c1);
    cout << "c2 = ";
    print(c2);

    first_iter = c3.begin();
    c2.splice_after(where_iter, c3, first_iter);
    cout << "After splicing the first element of c3 into c2:" << endl;
    cout << "c3 = ";
    print(c3);
    cout << "c2 = ";
    print(c2);

    first_iter = c4.begin();
    last_iter = c4.end();
    // set up to get the middle elements
    ++first_iter;
    c2.splice_after(where_iter, c4, first_iter, last_iter);
    cout << "After splicing a range of c4 into c2:" << endl;
    cout << "c4 = ";
    print(c4);
    cout << "c2 = ";
    print(c2);
}

typedef std::map<char, int> Mymap;

int map2_fun() {
    std::map<int, char> nums{{1, 'a'},
                             {3, 'b'},
                             {5, 'c'},
                             {7, 'd'}};

    std::cout << "nums contains " << nums.size() << " elements.\n";


    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// find and show elements
    std::cout << "c1.at('a') == " << c1.at('a') << std::endl;
    std::cout << "c1.at('b') == " << c1.at('b') << std::endl;
    std::cout << "c1.at('c') == " << c1.at('c') << std::endl;

    return (0);
}

int set_fun() {
    using namespace std;
    set<int> s1;

    s1.insert(1);
    s1.insert(2);

    cout << "The size of the set is initially " << s1.size()
         << "." << endl;

    s1.clear();
    cout << "The size of the set after clearing is "
         << s1.size() << "." << endl;

    std::set<int> nums{1, 3, 5, 7};
    std::cout << "nums contains " << nums.size() << " elements.\n";
}


int multimap_fun() {
    std::multimap<int, char> nums{{1, 'a'},
                                  {3, 'b'},
                                  {5, 'c'},
                                  {7, 'd'}};
    std::cout << "nums contains " << nums.size() << " elements.\n";

    multimap<int, int> m1;
    multimap<int, int>::iterator m1_Iter;
    multimap<int, int>::const_iterator m1_cIter;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(0, 0));
    m1.insert(Int_Pair(1, 1));
    m1.insert(Int_Pair(2, 4));

    m1_cIter = m1.begin();
    cout << "The first element of m1 is " << m1_cIter->first << endl;

    m1_Iter = m1.begin();
    m1.erase(m1_Iter);

    // The following 2 lines would err as the iterator is const
    // m1_cIter = m1.begin ( );
    // m1.erase ( m1_cIter );

    m1_cIter = m1.begin();
    cout << "First element of m1 is now " << m1_cIter->first << endl;
}


int unordered_map_fun() {
    // Create an unordered_map of three strings (that map to strings)
    std::unordered_map<std::string, std::string> u = {
            {"RED",   "#FF0000"},
            {"GREEN", "#00FF00"},
            {"BLUE",  "#0000FF"}
    };

    // Iterate and print keys and values of unordered_map
    for (const auto &n : u) {
        std::cout << "Key:[" << n.first << "] Value:[" << n.second << "]\n";
    }

    // Add two new entries to the unordered_map
    u["BLACK"] = "#000000";
    u["WHITE"] = "#FFFFFF";

    // Output values by key
    std::cout << "The HEX of color RED is:[" << u["RED"] << "]\n";
    std::cout << "The HEX of color BLACK is:[" << u["BLACK"] << "]\n";

    return 0;
}

int multimap2_fun() {
    using namespace std;
    multimap<int, int> m1;
    typedef pair<int, int> Int_Pair;

    m1.insert(Int_Pair(1, 10));
    m1.insert(Int_Pair(2, 20));

    const int &Ref1 = (m1.begin()->first);
    cout << "The key of the first element in the multimap is "
         << Ref1 << "." << endl;

    int &Ref2 = (m1.begin()->second);
    cout << "The data value of the first element in the multimap is "
         << Ref2 << "." << endl;
}

int unordered_set_fun() {
    std::unordered_set<std::string>
            first = {"Metropolis", "Solaris", "Westworld"},
            second = {"Avatar", "Inception"};

    swap(first, second);

    std::cout << "first:";
    for (const std::string &x: first) std::cout << " " << x;
    std::cout << std::endl;

    std::cout << "second:";
    for (const std::string &x: second) std::cout << " " << x;
    std::cout << std::endl;

    return 0;

}

int list_fun() {
    std::list<int> mylist2;
    std::list<std::pair<int, char> > mylist;

    mylist.emplace(mylist.begin(), 100, 'x');
    mylist.emplace(mylist.begin(), 200, 'y');

    std::cout << "mylist contains:";
    for (auto &x: mylist)
        std::cout << " (" << x.first << "," << x.second << ")";

    std::cout << '\n';
    return 0;
}

int stack_fun() {
    std::stack<int> foo, bar;
    foo.push(10);
    foo.push(20);
    foo.push(30);
    bar.push(111);
    bar.push(222);

    foo.swap(bar);

    std::cout << "size of foo: " << foo.size() << '\n';
    std::cout << "size of bar: " << bar.size() << '\n';

    return 0;
}


int priority_queue_fun() {
    std::priority_queue<int> mypq;

    mypq.push(30);
    mypq.push(100);
    mypq.push(25);
    mypq.push(40);

    std::cout << "Popping out elements...";
    while (!mypq.empty()) {
        std::cout << ' ' << mypq.top();
        mypq.pop();
    }
    std::cout << '\n';

    return 0;
}

void multiset_fun() {
    std::multiset<int> mymultiset;
    std::multiset<int>::iterator it;
    std::multiset<int> nums{1, 3, 5, 7};

    std::cout << "nums contains " << nums.size() << " elements.\n";
    // set some initial values:
    for (int i = 1; i <= 5; i++) mymultiset.insert(i * 10);  // 10 20 30 40 50

    it = mymultiset.insert(25);

    it = mymultiset.insert(it, 27);    // max efficiency inserting
    it = mymultiset.insert(it, 29);    // max efficiency inserting
    it = mymultiset.insert(it, 24);    // no max efficiency inserting (24<29)

    int myints[] = {5, 10, 15};
    mymultiset.insert(myints, myints + 3);

    std::cout << "mymultiset contains:";
    for (it = mymultiset.begin(); it != mymultiset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';


}

int unordered_multiset_fun() {
    std::unordered_multiset<int> nums{1, 3, 5, 7};
    std::cout << "nums contains " << nums.size() << " elements.\n";
}


int unordered_mulimap_fun() {
    std::unordered_multimap<int, char> nums{{1, 'a'},
                                            {3, 'b'},
                                            {5, 'c'},
                                            {7, 'd'}};
    std::cout << "nums contains " << nums.size() << " elements.\n";
}


#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue

int queue_fun() {
    std::queue<int> myqueue;
    int myint;

    std::cout << "Please enter some integers (enter 0 to end):\n";

    do {
        std::cin >> myint;
        myqueue.push(myint);
    } while (myint);

    std::cout << "myqueue contains: ";
    while (!myqueue.empty()) {
        std::cout << ' ' << myqueue.front();
        myqueue.pop();
    }
    std::cout << '\n';

    return 0;
}

int main() {

    //Последовательные контейнеры
    array_fun();  // gcc - ok,clang -ok
    vector_fun(); // gcc - bad,clang -ok
    deque_fun(); // gcc - bad,clang -bad

    list_fun(); // gcc - bad,clang -ok

    // Ассоциативные контейнеры
    set_fun();  // gcc - bad,clang -bad
    multiset_fun(); // gcc - bad,clang -bad
    map_fun();  // gcc - bad,clang -bad
    map2_fun();
    multimap_fun();  // gcc - bad,clang -bad
    multimap2_fun();

    // Неупорядоченные ассоциативные контейнеры
    unordered_set_fun();  // gcc - bad,clang -ok
    unordered_map_fun(); // gcc - bad,clang -ok

    unordered_multiset_fun();  // gcc - bad,clang -ok
    unordered_mulimap_fun();   // gcc - bad,clang -ok

    //Адаптеры контейнеров
    forwardlist_fun();
    priority_queue_fun();
    stack_fun();
    queue_fun();

    return 0;
}

