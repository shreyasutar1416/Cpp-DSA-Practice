//constants - variables that cannot be change

#include <iostream>
using namespace std;

int main(){
    const int n = 2;
    const float PI = 3.14;

    return 0;

}

/* Typecasting- conversion of data from one type to another type
1)Implicit conversion-automatic done by complier to avoid data loss, 
2)Explicit conversion- forced by programmers */

//Implicit conversion example

#include <iostream>
using namespace std;

int main(){
    cout<<(10/3); //implicit (automatic)
    cout<<(10/3.0);

    return 0;

}

//Explicit conversion example

#include <iostream>
using namespace std;

int main(){
    float PI = 3.14;
    cout<<(int)(PI)<<endl; //PI (float) converts into integer
    cout<<(char)('A' + 1)<<endl; //B
    cout<<(float(10/3))<<endl; //3.33

    return 0;

}

//Practice Q.S

#include <iostream>
using namespace std;

int main(){
    cout<<(bool)3 + 2;  //true- 1 + 2 = 3
    cout<<(23.5 + 2 + 'A'); //90.5

    return 0;

}
