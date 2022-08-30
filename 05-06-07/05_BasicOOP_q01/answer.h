class Integer
{
private:
    int val;

public:
    void setValue(int val);
    int getValue(int val);
    Integer(int val)
    {
        this->val = val;
    }
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
