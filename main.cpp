#include <iostream>
#include <iomanip>
#include <iterator>
#include <list>
#include <string>

using namespace std;

int main() {
    cout << "Part 1: Work With a Pointer\n" << endl;

    int score = 85;
    int* score_ptr = &score;

    cout << "Score: " << score << endl;
    cout << "Address: " << score_ptr << endl;
    cout << "Value through pointer: " << *score_ptr << endl;

    *score_ptr = 95;

    cout << "\nAfter modifying through pointer:" << endl;
    cout << "Score: " << score << endl;
    cout << endl;

    cout << "Part 2: Work With an Iterator\n" << endl;

    list<int> scores {85, 90, 78, 92, 88};

    auto iter = scores.begin();

    cout << "First score: " << *iter << endl;

    iter++;

    cout << "Second score: " << *iter << endl;

    iter++;
    cout << "Third score: " << *iter << endl;
    cout << endl;

    cout << "Part 3: Modify a Value Through the Iterator\n" << endl;

    *iter = 100;

    cout << "All scores in the list:" << endl;
    for (int s : scores) {
        cout << s << " ";
    }

    cout << endl;

    return 0;
}
