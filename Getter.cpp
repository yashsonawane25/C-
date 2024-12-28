#include <iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;

    public:
    // setter 
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
   
    }

}

int main(){
    // ignore these lines 
    #ifndef ONLINE_JUDGE
    freeopen("input.txt","r",stdin);
    freeopen("output.txt","w",stdout);
    #endif

    Player harsh;
    harsh.setScore(10);
    harsh.setHealth(50);
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getHealth()
}