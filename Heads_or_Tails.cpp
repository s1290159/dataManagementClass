#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<random>
using namespace std;
int main(){
  string name;
  cout << "Who are you?" << endl << "> ";
  cin >> name;
  cout << "Hello, " << name << "!" << endl;


  int a=0;

  srand(time(NULL));
  cout << "Tossing a coin..." << endl;
  for(int i=0; i<3; i++){
    int coin = rand() % 2;
    cout << "Round " << i+1 << ": ";
    if(coin){
      cout << "Heads" << endl;
      a++;
    }else{
      cout << "Tails" << endl;
    }
  }
  cout << "Heads: " << a << ", Tails: " << 3-a << endl;
  return 0;
}
