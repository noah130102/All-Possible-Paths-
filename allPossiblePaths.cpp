#include <iostream>

using namespace std;

int allPossiblePaths(int s, int e){
    if (s==e){
        return 1;
    }
    if (s>e){
        return 0;
    }
    int count = 0;
    for (int  i = 1; i <= 6; i++)
    {
        count+=allPossiblePaths(s+i,e);
    }
    return count;
}

int main (){

    int start = 1;
    int end = 4;

    cout<<allPossiblePaths(start,end)<<endl;
    return 0;
}