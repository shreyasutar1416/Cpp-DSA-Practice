/* PATTERNS- USING NESTED LOOPS
 1) Outer loop: no of rows(n times) 1 to n
 2) inner loop: no of cols-each rows (i times) 1 to i
 3) work */

 #include <iostream>
 using namespace std;

 int main(){
    //outer loop
    for(int i = 1; i<=4; i++){
        //inner loop
        for(int j = 1; j<=4; j++){
            //work
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
 }

 /* Print Star pattern [inner loop (1 to i)]
 o/p: 
 *
 * *
 * * *
 * * * *
*/
#include <iostream>
using namespace std;

int main(){
    int n = 4;
    //outer loop
    for(int i = 1; i<=n; i++){
        //inner loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

/* Print the inverted star pattern [inner loop (1 to n-i+1)]
o/p:
* * * *
* * *
* *
*      */
#include <iostream>
using namespace std;

int main(){
    int n = 4;
    //outer loop
    for(int i = 1; i<=n; i++){
        //inner loop
        for(int j = 1; j<=(n-i+1); j++){
            //work
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

/* Print the half pyramid pattern [inner loop (1 to i)]
o/p:
1
1 2
1 2 3
1 2 3 4   */
#include <iostream>
using namespace std;

int main(){
    int n = 4;
    //outer loop
    for(int i = 1; i<=n; i++){
        //inner loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/* Print Character Pyramid pattern [inner loop (1 to i)]
o/p: 
A
B C
D E F
G H I J    */
#include <iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = 'A';

    //outer loop
    for(int i = 1; i<=n; i++){
        //inner loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

/* Print hollow rectangle pattern [inner loop (1 to n-1)]  
o/p:
* * * * *
*       *
*       *
* * * * *     */
#include <iostream>
using namespace std;

int main(){
    int n = 4;

    //outer loop
    for(int i = 1; i<=n; i++){
        cout<<"*"; //first line

        //inner loop
        for(int j = 1; j<=n-1; j++){
            //work
            if(i==1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl; //last line
    }
    return 0;
}
        
/* Print inverted and rotated half pyramid
[inner loop (spaces- 1 to n-i, stars- 1 to i)]
o/p:
        *
      * *
    * * *
  * * * *   */
#include <iostream>
using namespace std;

int main(){
    int n = 4;

    //outer loop
    for(int i = 1; i<=n; i++){
        //inner(spaces) loop
        for(int j = 1; j<=n-i; j++){
            //work
            cout<<"  ";
        }
        //inner(stars) loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/* Print Floyd's Triangle pattern [inner loop (1 to i)]
o/p:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15     */
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 1;

    //outer loop
    for(int i = 1; i<=n; i++){
        //inner loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}

/* Print Diamond Pattern 
[inner loop (spaces- 1 to n-i, stars- 1 to 2*i-1)]
o/p:
        *
      * * *
    * * * * *
  * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        
*/
#include <iostream>
using namespace std;

int main(){
    int n = 4;

    //1st pyramid (outer loop)
    for(int i = 1; i<=n; i++){
        //inner(spaces) loop
        for(int j = 1; j<=(n-i); j++){
            //work
            cout<<"  ";
        }
        //inner(stars) loop
        for(int j = 1; j<=(2*i-1); j++){
            //work
            cout<<" "<<"*";
        }
        cout<<endl;
    }

    //2nd pyramid (outer loop)
    for(int i = n; i>=1; i--){
        //inner(spaces) loop
        for(int j = 1; j<=(n-i); j++){
            //work
            cout<<"  ";
        }
        //inner(stars) loop
        for(int j = 1; j<=(2*i-1); j++){
            //work
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/* Print Butterfly Pattern 
[inner loop (stars- 1 to i, spaces- 1 to 2*n-i, stars- 1 to i)]
o/p:
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *       */
#include <iostream>
using namespace std;

int main(){
    int n = 7;

    //1st pyramid (outer loop)
    for(int i = 1; i<=n; i++){
        //inner(stars) loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<"*";
        }
        //inner(spaces) loop
        for(int j = 1; j<=2*(n-i); j++){
            //work
            cout<<"  ";
        }
        //inner(stars) loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<"*";
        }
        cout<<endl;
    }

    //2nd pyramid (outer loop)
    for(int i = n; i>=1; i--){
        //inner(stars) loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<"*";
        }
        //inner(spaces) loop
        for(int j = 1; j<=2*(n-i); j++){
            //work
            cout<<"  ";
        }
        //inner(stars) loop
        for(int j = 1; j<=i; j++){
            //work
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/* Question 1 : Print the 0-1 Triangle pattern for n = 5
[outer loop( 0 to n), inner loop( 0 to i), work(val: true,false)]
o/p:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1    */
#include <iostream>
using namespace std;

int main(){
    bool val = true;
    int n = 5;
    //outer loop
    for(int i = 0; i<n; i++){
        //inner loop
        for(int j = 0; j<=i; j++){
            cout<<val<<" ";
            val =! val;
        }
        cout<<endl;
    }
    return 0;
}

/* Print the rhombus patternf for n = 5
[inner loop(spaces, 0 to n-i-1), stars(0 to n)]
o/p:
        * * * *
      * * * *
    * * * *
  * * * *  
* * * *      */
#include <iostream>
using namespace std;

int main(){
    int n = 5;

    //outer loop
    for(int i = 0; i<n; i++){
        //inner(spaces) loop
        for(int j = 0; j<=n-i-1; j++){
            cout<<" ";
        }
        //inner(stars) loop
        for(int j = 0; j<n; j++){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/* Print the palindromic pattern with number for n = 5
[inner loop(spaces- 1 to n-1, mums backward- i to 1, nums forward- 2 to i)]
o/p: 
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5     */
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    //outer loop
    for(int i = 1; i<=n; i++){
        //inner(spaces) loop
        for(int j = 1; j<=n-1; j++){
            cout<<" ";
        }
        //inner(nums backward) loop
        for(int j = i; j>=1; j--){
            cout<<j;
        }
        //inner(nums forward) loop
        for(int j = 2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
