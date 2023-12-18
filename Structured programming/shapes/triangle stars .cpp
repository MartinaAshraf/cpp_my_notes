/*

*******
 *    *
  *   *
   *  *
    * *
     **
      *

*/
#include <iostream> 
using namespace std;
int main() {
int i,j; for(i=1 ; i <= 7 ; i++) {
for(j=1 ; j <= 7 ; j++) {
if(i == 1 or i == j or j == 7) {
cout<<"*";
}else{ cout<<" ";
} } cout<<endl;
}
return 0;}

/*

*      
**     
* *    
*  *   
*   *  
*    * 
*******

*/
#include <iostream>
using namespace std;
int main() {
int i,j; for(i=1 ; i <= 7 ; i++) {
for(j=1 ; j <= 7 ; j++) {
if(j == 1 or i == j or i == 7) {
cout<<"*";
}
 else
 { cout<<" ";} 
}
 cout<<endl;
} 
 return 0;
}




/*

*
**
***
****
*****
****
***
**
*

*/

#include <iostream> 
using namespace std;
int main() {
int i,j,n; 
 // top part 
for(i=1 ; i <= 5 ; i++) {
for(j=1 ; j <= i ; j++) {
cout<<"*"; } cout<<endl; }
// bottom part
for(i=4 ; i >= 1 ; i--) {
for(j=i ; j >= 1 ; j--) {
cout<<"*"; } cout<<endl;
} return 0;
}
