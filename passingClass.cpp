#include <iostream>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
}

int add(int a,int b){
    return a+b;
}

int main(){
    cout<<"\n\n\n\n\n"
    Player harsh; //object creation,statically
    Player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(true);
    raghav.setHealth(100);
    
    cout<< add(10,12);
}
