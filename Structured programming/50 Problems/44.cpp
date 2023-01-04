/*. A builder is given the measurements of five planks in feet (‘) and inches (“). He wants to convert
the lengths to meters. One foot is 0.3048 meters, and one inch is 0.0254 meters. The
measurements of the planks are: 4’ 6”, 8’ 9”, 9’ 11”, 6’ 3” and 12’ 0” (i.e. the first plank is 4
feet 6 inches long). Store the data in a file.
*/

#include <iostream>
#include<fstream>
using namespace std;
float length(int feet,int inch){
float meter1,meter2;
meter1= 0.3048*feet;
meter2= 0.0254 *inch;
return meter1+meter2;
}
int main()
{
 ofstream out("out.txt");
 out<<length(4,6)<<endl;
 out<<length(8,9)<<endl;
 out<<length(9,11)<<endl;
 out<<length(6,3)<<endl;
 out<<length(12,0)<<endl;
 return 0;
}
