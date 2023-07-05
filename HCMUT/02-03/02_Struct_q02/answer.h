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

void addAddendum(SCP &obj, string addendum) {
    // Student answer
    string* newAddenum = new string[obj.numAddendums+1];
    for (int i=0;i<obj.numAddendums;i++){
        newAddenum[i] = obj.addendums[i];
    }
    newAddenum[obj.numAddendums] = addendum;

    //need to delete obj.addendums
    delete []obj.addendums;

    //pointer point to new address
    obj.addendums=newAddenum;
    obj.numAddendums++;
    cout << obj.numAddendums << endl;
}
/// END  <STUDENT ANSWER>
