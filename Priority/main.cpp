#include <iostream>
#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;
class PriQue{
private:
    int val;
    int priority;
public:
    PriQue(int val,int pr)
    {
        this->priority=pr;
        this->val=val;
    }

    bool operator>(const PriQue& other) const {
        return priority > other.priority;
    }
    bool operator<(const PriQue& other) const {
        return priority < other.priority;
    }
    bool operator==(const PriQue& other) const {
        return priority == other.priority;
    }
   /* void afficher()
    {
        cout<<val<<priority<<endl;
    }
    */

};

template <class T>
class Priority{
private:
    set<T> Qu;

public:
    void inserer(T elem)
    {
        this->Qu.insert(elem);
    }
   /* void afficherPQ()
    {
        for(PriQue x:pq)
            x.afficher();
    }*/
};
int main()
{
    Priority<PriQue> p;
    auto start = high_resolution_clock::now();
    for(int i=1;i<=5000000;i++)
        p.inserer({i,i});
    //p.afficherPQ();
    //temps d'execution
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "<< duration.count()<<" microseconds"<<endl;
    return 0;
}