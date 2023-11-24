#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;
//map : giúp lưu các cặp giá trị(key/value)
// có thể cùng kiểu hoặc khác kiểu
// chỉ lưu các key riêng biệt
// tăng dần theo key

// multimap
// có thể cùng kiểu hoặc khác kiểu
// có thể lưu các key giống nhau
// tăng dần theo key

// các hàm :
// insert(key, value)
// size()
// clear()
// empty()
// erase(key) hoặc erase(iterator)
// find()   ,  count()  tim kiem key
int main () {
    map<int, int> mp;
    mp.insert(pair<int,int>(2,3));
    mp.insert(pair<int,int>(3,4));
    mp.insert(pair<int,int>(1,7));
    mp.insert(pair<int,int>(2,6)); // cach 1
    mp.insert({10,7});             // cach 2
    // iterator
    //mp.clear();  xoa map;
    map<int,int> :: iterator x = mp.begin();
    if (mp.find(3) != mp.end()) cout << "YES" << endl;
    mp.erase(x);
    for (map<int,int> :: iterator x = mp.begin(); x!= mp.end(); x++) {
        cout << x->first << " " << x->second << endl;
    }
    

}