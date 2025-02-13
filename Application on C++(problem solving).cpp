#include <iostream>
#include <bits/stdc++.h>
using namespace std;

  int main(){
    cout << "Enter All Letters Of The English Alohabet "<<endl ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.size() ; i++){
      s[i]=tolower(s[i]) ;  // To Make All Letters Lowercase
    }

    int freq[26] = {0};
     for (int i = 0 ; i < s.size() ; i++){
      if (s[i] >= 'a' && s[i] <= 'z'){   // To Make Sure He Entered The English Letter 
        freq[s[i] -'a'] ++ ;    // To Know The Number Of Times Each Letter Appers
     }
    }

     bool correct = true ;
     for (int i = 0 ; i < 26 ; i++){
      if (freq[i] ==0){  
        correct = false ;   // If A Letter Doesn't Appear In The English Alpthabet 
      }
     }

     if (correct){
      cout << "You Have Completed The Engish Alphabet From a To z "<<endl ;
      cout << "Congratulation :)" <<endl ;

      cout << "Do You Want To Know How Many Times Each Letter Is Repeated (Y/N) ?"<<endl;
      char I_Want ;
      cin >> I_Want ;
      if (I_Want == 'Y' || I_Want == 'y'){
         for (int i = 0 ; i < 26 ;i++){
          cout << "You Repeated The Letter " << char(i + 'a' ) << " Number Of Time " << freq[i] <<endl ;
        }
       }
       else if (I_Want == 'N' || I_Want == 'n'){
        cout << "Welcom :)" <<endl ;
       }
       else {
        cout << "InValid Character Please Enter Y Or N "<<endl ;
       }
       
    } 
     else{
      cout << "You Have Not Completed The English Alphabet Letter !! " ;
      cout << "You Missing Letter : " ;
      for (int i = 0 ; i < 26 ; i++){
        if (freq[i] == 0){
          cout << char( i + 'a') << " " ;
        }
      }
     }
     return 0 ; 
  }


