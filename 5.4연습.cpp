#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "���ڸ� �Է��Ͻÿ� :";
    cin >> number;
    switch(number){
        case 0:
        cout << "zero" <<endl;
        break;
        case 1:
        cout << "one" << endl;
        break;
        case 2:
        cout << "two" << endl;
        break;
        default:
        cout << "many" << endl;
        break;
    }
    

  return 0;
}
