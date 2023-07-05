#include <iostream>
#include <cstring>

using namespace std;

/// BEGIN  <STUDENT ANSWER>
struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};

SCP* cloneSCP(SCP* original) {
    // Student answer
    SCP *newScp = new SCP;
    newScp->id = original->id;
    newScp->objClass = original->objClass;
    newScp->speConProcedures = original->speConProcedures;
    newScp->description = original->description;
    newScp->numAddendums = original->numAddendums;
    newScp->addendums = new string[newScp->numAddendums];
    for(int i = 0; i < original->numAddendums; i++)
    {
        newScp->addendums[i] = original->addendums[i];
    }

    return newScp;  
}
/// END  <STUDENT ANSWER>
