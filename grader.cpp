#include <iostream>
using namespace std;
int main (){
 cout <<"input your examscore"<<endl;
   char examSCORE;
   cin>>examSCORE;
   char kofi=65, ramat=66,adwoa=67,icon=68,kwame=69 ,kojo=70 ;
   if (examSCORE >= 80){
    examSCORE=kofi ;
    }
    else if(examSCORE >= 70){
   examSCORE = ramat ;  
     }
    else if(examSCORE>=60){
    examSCORE=adwoa;  
     }
    else if (examSCORE>=50){
     examSCORE=icon ; 
      }
    else if(examSCORE>=40){
               examSCORE=kwame ;       
       }
    else{
      examSCORE=kojo;  
        }
     cout <<"your grade is \t" << examSCORE ;
  return 0 ;
  }
