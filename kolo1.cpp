#include <iostream>
using namespace std;
void pytanie() {
cout<<"Q1) Jak wyswietlic roznice miedzy drugim a trzecim zatwierdzeniem wykonanym w galezi master?"<<endl;
cout<<"A1) git diff 9952 5672 bądź nie znając commita git diff HEAD~2 HEAD~3"<<endl;
cout<<"Q2) Co sie zmienilo?"<<endl;
cout<<"A2) zmienila sie tresc int maina "<<endl;
}

 int main(int argc, char **argv) {
pytanie();
return 0;
 } 
