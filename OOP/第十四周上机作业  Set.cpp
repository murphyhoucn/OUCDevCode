#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> all;
    set<int> record;
    int a;
    cin >> a;
    int i;
    for (i = 1; i <= a; i++) {
        string output;
        cin >> output;
        if (output == "add") {
            int num;
            cin >> num;
            all.insert(num);
            record.insert(num);
            cout << all.count(num) << endl;
        }
        if (output == "del") {
            int num;
            cin >> num;
            int c = all.count(num);
            cout << c << endl;
            if (c) {
                int count = 0;
                for (;; ) {
                    all.erase(all.lower_bound(num));
                    count++;
                    if (count == c)break;
                }
            }
        }
        if (output == "ask") {
            int num; cin >> num;
            if (record.find(num) == record.end())
                printf("0 0\n");
            else {
                cout << "1 " << all.count(num) << endl;
            }
        }
    }
    return 0;
}