class Integer
{
private:
    int val;

public:
    void setValue(int val);
    int getValue(int val);
    // Integer(int val);
    Integer(int val)
    {
        this->val = val;
    }
    // Integer::~Integer(){
    //     delete[] arr;
    // }
};

void Integer::setValue(int value)
{
    value = val;
}
int Integer::getValue(int val)
{
    return val;
}
/// END  <STUDENT ANSWER>
