#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt") ;
    int x ;
    x=0 ;
    float y ; 
    y=0 ;
    float a ;
    float b ;
    b=0 ;
    float c ;
      
    string textline ;
     while(getline(score,textline))
     {
        y += atof(textline.c_str()) ;
      b += pow(atof(textline.c_str()),2);
      
        x++ ;
     }
      a= y/x ;
      c=pow(b/x-a*a,0.5);


    cout << "Number of data = " << x << "\n" ; 
    cout << setprecision(3);
    cout << "Mean = "<< a << "\n";
    cout << "Standard deviation = " << c;
score.close() ;
}