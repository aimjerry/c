#include <iostream>
using namespace std;
int main()
{
    int a;
    int &ra = a;
    printf("%p\n", &a);
    printf("%p\n", &ra);
}
// void TESTFUN(int a = 10, int b=2)
// {
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
// }
// int main()
// {
//     TESTFUN();
//     TESTFUN(10, 10);
// }
// using namespace std;
// int main()
// {
//     cout << "hello world!" << endl;
//     return 0;
// }
