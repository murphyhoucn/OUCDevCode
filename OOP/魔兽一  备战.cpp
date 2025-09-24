
#include <iostream>
using namespace std;
string WarriorType[5] = { "dragon","ninja","iceman","lion","wolf" };//dragon,ninja,iceman,lion,wolf
int redOrder[6] = { 0,3,4,5,2,1 };
int blueOrder[6] = { 0,4,1,2,3,5 };
int _i = 1, _j = 1;
int openingNo = 0;
int warriorHP[6];
int minHp;

class Warrior {
public:
    int hp;
    int id;
    int type;//1d,2n,3i,4l,5w
    Warrior() {}
    Warrior(int _hp, int _id, int _type) :hp(_hp), id(_id), type(_type) {}
};

class HeadQuarter {
public:
    int mana;
    int redNo = 0;
    int blueNo = 0;
    string HQtype;
    bool isOver = 0;
    HeadQuarter() {};
    HeadQuarter(int _mana, string _type) {
        mana = _mana;
        HQtype = _type;
    }
    int warriorCount[6] = { 0 };


    void SpawnFunc(string _HQtype) {

        if (isOver)return;
        if (mana < minHp) {
            isOver = 1;
            printf("%03d ", openingNo);
            cout << _HQtype << " headquarter stops making warriors\n";
            return;
        }
        if (HQtype == "RED") {
            for (;;) {
                int i = _i;
                if (i > 5) {
                    i %= 5;
                    if (i == 0)i = 5;
                }
                if (warriorHP[redOrder[i]] > mana) {
                    ++_i;
                    continue;
                }

                else {
                    Warrior troop(warriorHP[redOrder[i]], ++redNo, redOrder[i]);
                    //cout << i<< _i<<endl;
                    printf("%03d red %s %d born with strength %d,%d %s in red headquarter\n", openingNo,
                        WarriorType[troop.type - 1].c_str(), redNo, warriorHP[troop.type],
                        ++warriorCount[troop.type], WarriorType[troop.type - 1].c_str());

                    ++_i;
                    mana -= troop.hp;
                    //cout << "Current RED mana:"<<mana<<endl;
                   // cout << "Current RED minHP:"<<minHp<<endl;
                    break;
                }
            }
        }
        else {
            for (;;) {
                int j = _j;
                if (j > 5) {
                    j %= 5;
                    if (j == 0)j = 5;
                };

                if (warriorHP[blueOrder[j]] > mana) {
                    ++_j;
                    continue;
                }
                else {
                    Warrior troop(warriorHP[blueOrder[j]], ++blueNo, blueOrder[j]);
                    // cout << j <<_j<<endl;
                    printf("%03d blue %s %d born with strength %d,%d %s in blue headquarter\n", openingNo,
                        WarriorType[troop.type - 1].c_str(), blueNo, warriorHP[troop.type],
                        ++warriorCount[troop.type], WarriorType[troop.type - 1].c_str());

                    ++_j;
                    mana -= troop.hp;
                    //cout << "Current BLUE mana:"<<mana<<endl;
                    break;
                }
            }
        }
    }

};

class Game {
public:
    int M;
    HeadQuarter RED, BLUE;
    void reset() {
        _i = _j = 1;
        openingNo = 0;

    }
    void GameStart() {
        RED.HQtype = "RED"; BLUE.HQtype = "BLUE";
        while (true) {
            if (RED.isOver && BLUE.isOver)break;
            RED.SpawnFunc("red");
            BLUE.SpawnFunc("blue");
            openingNo++;
        }
    }
    void initHQ() {
        cin >> M;
        RED.mana = BLUE.mana = M;
    }
    void initWarrior() {
        for (int i = 1; i <= 5; i++) {
            cin >> warriorHP[i];
        }
        minHp = 10000;
        for (int i = 1; i <= 5; i++) {
            if (warriorHP[i] < minHp) {
                minHp = warriorHP[i];
            }
        }
    }
};

int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        Game game;
        game.reset();
        cout << "Case:" << i + 1 << endl;
        game.initHQ();
        game.initWarrior();
        game.GameStart();
    }
    return  0;
}
