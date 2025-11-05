#include <iostream>
using namespace std;
int main()
 {
    int num = 1;
    while (num <= 50)
	 {
        if (num % 3 == 0) 
		{
            cout <<num << endl;  
        }
        num++;  
    }
    return 0;
}
