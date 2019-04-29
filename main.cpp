#include <iostream>
#include <vector>

using std::cout;    using std::endl;
using std::vector;

int main(){
    vector<int> ivec(18);
    vector<int>::size_type cnt = ivec.size();

    //前置版本
    //不需要使用ix和cnt的当前值，而且后置版本有拷贝的开销，故使用前置版本
    for (vector<int>::size_type ix = 0; ix != ivec.size();
        ++ix, --cnt){
        ivec[ix] = cnt;
    }
    for (auto i : ivec){
        cout << i << " ";
    }
    cout << endl;

    //后置版本
    cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size();
         ix++, cnt--){
        ivec[ix] = cnt;
    }
    for (auto j : ivec){
        cout << j << " ";
    }
    cout << endl;

}