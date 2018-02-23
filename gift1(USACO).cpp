/*
ID: lamduca2
TASK: gift1
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct groupMember{
    string name;
    int money;
};



int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    groupMember a[10];
    int n,i;
    fin >> n;
    for(i=0;i<n;i++)
    {
        fin >> a[i].name;
        a[i].money=0;
    }

    for(i=0;i<n;i++)
    {
        string nameGiver;
        fin >> nameGiver;

        int gift,divide;
        fin >> gift >> divide;

        int j,k,flag=1;
        for(j=0;j<divide;j++)
        {
            string nameReceiver;
            fin >> nameReceiver;
            for(k=0;k<n;k++)
            {
                if(nameReceiver==a[k].name) a[k].money+= gift/divide;
                if(nameGiver==a[k].name&&flag)
                {
                    a[k].money+= gift%divide - gift;
                    flag=0;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        fout << a[i].name <<" "<<a[i].money<<endl;

    }

    return 0;
}
