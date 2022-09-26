#include <iostream>
#include <string>
#include<vector>
using namespace std;
class student
{
    string name;
    string adress;
    string telnum;
    string email;
    int nz;
    float ocenka;
public:
    student()
    {
        cout << "Enter name of student:" << endl;
        cin >> this->name;
        cout << "Enter adress:" << endl;
        cin >> this->adress;
        cout << "Enter telephone number:" << endl;
        cin >> this->telnum;
        cout << "Enter email:" << endl;
        cin >> this->email;
        cout << "Enter number of zbook:" << endl;
        cin >> this->nz;
        this->ocenka = 0;

    }
    void set_course()
    {
        string cname;
        cout << "Enter course:";
        cin >> cname;
    }
    void get_course()
    {

    }
};
class professor
{
    string name;
    string adress;
    string telnum;
    float oplata;
    
public:
    int id;
    professor()
    {
        cout << "Enter name:" << endl;
        cin >> this->name;
        cout << "Enter adress:" << endl;
        cin >> this->adress;
        cout << "Enter telephone number:" << endl;
        cin >> this->telnum;
        cout << "Enter oplata:" << endl;
        cin >> this->oplata;
        cout << "Enter id:" << endl;
        cin >> id;

    }
};
class course
{
    
    int number;
    float price;
    
public:
    string discipline;
    int prof_id;
    course()
    {
        cout << "Enter discipline:" << endl;
        cin >> this->discipline;
        cout << "Enter number of discipline:" << endl;
        cin >> this->number;
        cout << "Enter price:" << endl;
        cin >> this->price;
        cout << "Enter id of professor:" << endl;
        cin >> prof_id;
    }
    void add_student()
    {

    }
    void del_student()
    {

    }
};
class study
{
    vector <int> ocenki;
public:
    void sr_ball()
    {
        int sum;
        for (int i = 0; i < ocenki.size(); i++)
        {
            sum += ocenki[i];
        }
        cout << "Srednya ocenka: " << sum / ocenki.size();
    }
    void final()
    {
        
        cout << ocenki[-1];
    }
};

int main()
{
    vector<course> vuz;
    cout << "Count of course?" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)   
    {
        course nw;
        vuz.push_back(nw);
    }
    professor einstein;
    for (int i = 0; i < vuz.size(); i++)
    {
        if (einstein.id == vuz[i].prof_id)
        {
            cout << vuz[i].discipline;
        }
    }

}


