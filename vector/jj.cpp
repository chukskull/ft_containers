#include "vector.hpp"
#include <map>
#include <vector>


class B {
public:
    char *l;
    int i;
    B():l(nullptr), i(1) {};
    B(const int &ex) {
        this->i = ex;
        this->l = new char('a');
    };
    virtual ~B() {
        delete this->l;
        this->l = nullptr;
    };
};

class A : public B {
public:
    A():B(){};
    A(const B* ex){
        this->l = new char(*(ex->l));
        this->i = ex->i;
        if (ex->i == -1) throw "n";
    }
    ~A() {
        delete this->l;
        this->l = nullptr;
    };
};

int main(void)
{

    ft::vector<int> vector;
    std::vector<int> v;
    ft::vector<int> tmp;
    tmp.assign(2600 * 100, 1);
    vector.assign(4200 * 100, 1);
    puts("here");
    vector.insert(vector.end() - 1000 * 100, tmp.begin(), tmp.end());
    v.push_back(vector[3]);
    v.push_back(vector.size());
    v.push_back(vector.capacity());

    // std::unique_ptr<B> k2(new B(3));
    // std::unique_ptr<B> k3(new B(4));
    // std::unique_ptr<B> k4(new B(-1));
    // _vector<A> vv;
    // _vector<B*> v1;

    // v1.push_back(&(*k2));
    // v1.push_back(&(*k3));
    // v1.push_back(&(*k4));
    // try { vv.insert(vv.begin(), v1.begin(), v1.end()); }
    // catch (...) {
    //     v.push_back(vv.size());
    //     v.push_back(vv.capacity());
    // }
    return 0;

}