#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    string country;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->country = "bangladesh";
    dhoni->jersey_no = 7;
    Cricketer *koholi = new Cricketer;

    koholi->country = dhoni->country;
    koholi->jersey_no = dhoni->jersey_no;
    delete dhoni;
    cout<< koholi->jersey_no << " " << koholi->country;
    return 0;
}