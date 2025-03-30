//Modified by: Ean Zheng
#include <iostream>
#include <string>
using namespace std;

int main() {
   string input;
   cout << "Enter text:" << endl;
   getline(cin, input);
   cout << "You entered: " << input << endl;
   while((input.find("BFF") != string::npos) || (input.find("IDK") != string::npos) || 
   (input.find("JK") != string::npos) || (input.find("TMI") != string::npos) || 
   (input.find("TTYL") != string::npos)){
      if(input.find("BFF") != string::npos){
         input.replace(input.find("BFF"), 3, "best friend forever");
      }
      if(input.find("IDK") != string::npos){
         input.replace(input.find("IDK"), 3, "I don't know");
      }
      if(input.find("JK") != string::npos){
         input.replace(input.find("JK"), 2, "just kidding");
      }
      if(input.find("TMI") != string::npos){
         input.replace(input.find("TMI"), 3, "too much information");
      }
      if(input.find("TTYL") != string::npos){
         input.replace(input.find("TTYL"), 4, "talk to you later");
      }
   }
   cout << "Expanded: " << input << endl;
   return 0;
}