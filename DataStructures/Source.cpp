#include <iostream>
#include "RectangleLec1.h"
#include "StackLec2.h"
#include <stack>
#include "QueueLec3.h"
#include <queue>
#include "ArrayListLec4.h"
#include "LinkedListLec5.cpp"
using namespace std;

int main() {
    cout << "enter width and height" << endl;
    int width, height;
    cin >> width >> height;
    RectangleLec1 r1(width, height);
    cout << "area= " << r1.area() << endl;
    cout << "--------------------------------" << endl;

    StackLec2 S;
    S.push(1);
    S.push(2);
    S.push(3);

    cout << "top= " << S.top() << endl;

    while (!S.IsEmpty()) {
        cout << S.top() << endl;
        S.pop();
    }
    cout << "---------------------" << endl;

    stack<int> ss;
    ss.push(10);
    ss.push(20);
    ss.push(30);

    cout << "top= " << ss.top() << endl;

    while (!ss.empty()) {
        cout << ss.top() << endl;
        ss.pop();
    }
    cout << "---------------------" << endl;

    QueueLec3 q;
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.enqueue(3);

    cout << "the queue contains:" << endl;
    while (!q.empty()) {
        cout << q.Front() << endl;
        q.dequeue();
    }
    cout << "---------------------" << endl;

    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);

    while (!Q.empty()) {
        cout << Q.front() << endl;
        Q.pop();
    }
    cout << "---------------------" << endl;

    ArrayListLec4 L;
    L.Append(9);
    L.Append(8);
    L.Append(7);
    L.Append(6);
    L.insertAt(2, 100);
    L.deleteAt(1);

    for (int i = 0; i < L.Length(); i++)
        cout << L.At(i) << endl;
    cout << "---------------------" << endl;

    vector<int> V;
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);
    vector<int>::iterator it;
    for (it = V.begin(); it != V.end(); it++) {
        cout << *it << endl;
    }
    cout << "--------------------------------" << endl;

    LinkedListLec5<int> Linkk;
    Linkk.Append(9);
    Linkk.Append(10);
    Linkk.Append(11);
    Linkk.InsertAt(1, 100);
    Linkk.DeleteAt(3);

    for (int i = 0; i < Linkk.Length(); i++)
        cout << Linkk.At(i) << endl;

    return 0;
}
