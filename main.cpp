#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
    cout<<"Hello, Player."<<endl;
    cout<<"Welcome to word guess game by Horlarh-Tech"<<endl;
    cout<<"The rule is simple"<<endl;
    cout<<"Get the right word to level up"<<endl;
    cout<<"Game time!" <<endl;


   string original_word[5] = {"stone","beauty", "lagoon", "plague", "latitude"};
   string shuffle [5] = {"stone","beauty", "lagoon", "plague", "latitude"};
      int level= 1;
      int tries = 5;
      int Tlevel = 5;
      srand(1234);
      for (string&word:shuffle){
        random_shuffle(word.begin(),word.end());
      }
      while (level <=5&&tries>0) {
        string input;
        cout<< "\t level" << level
        <<",tries:" << tries <<endl;
        cout << " shuffle the word:"<<shuffle[level-1]<<endl;
        cout<< "choose your guess:";
        cin>>input;
        if(input==original_word[level-1])
        {
            cout<<"correct!."<<endl;
            ++level;

        }
        else{
            cout << "Wrong! You just lost a life, tries remaining:"<< (--tries)<<endl;

        }

        }
        if (tries==0)
            cout<<"Your tries have finished"<<endl;
        else {

            cout<<"Excellent job, you completed the levels"<<endl;
        }

       return 0;
}
