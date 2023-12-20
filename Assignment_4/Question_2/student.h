
typedef struct
    {
    char firstName[50];
    char middleName[50];
    char lastName[50];
    }stuName;
    
struct Student 
{
    int roll_no;
    stuName name;
    int day;
    int month;
    int year;
    float marks[3]; //for Eng, Math and CS 
};

void average(float []);
void display_info(struct Student []);
