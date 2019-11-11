#include <windows.h>
#include <iostream>
#include <fstream>
#include<conio.h>
#include <stdlib.h>

using namespace std;

void  UserDirectory() {
    CreateDirectory("Story Minder", NULL);
    CreateDirectory("Story Minder/User", NULL);
}
void UsersFile()
{
    ofstream Users("Story Minder/User/Users.txt",ios::app);
    ifstream UsersFileOpen;
    UsersFileOpen.open("Story Minder/User/Users.txt");
    if(!UsersFileOpen)
    {
        cout<<"There is a Problem with the directory."<<endl;
    }
}
/*void UserCount(int cnt)
{
ofstream Count("Story Minder/User/Count.txt");
Count<<cnt<<endl;
}*/
class SignUP
{
public:
    string username;
    string email;
    string password;
    friend ofstream & operator<<(ofstream &UserData,SignUP &User);
};
ofstream & operator<<(ofstream &UserData,SignUP &User) {
    UserData << User.username << endl;
    UserData << User.email << endl;
    UserData << User.password << endl;
    UserData<<endl;
    return UserData;
}
void SignUp()
{
    SignUP User;
    cout<<"Username : ";
    cout<<"(Note : Cannot contain any space.)"<<endl;
    cin>> User.username;
    cout<<"Email : ";
    cin>> User.email;
    cout<<"Create password : ";
    cin>>User.password;
    ofstream UserData("Story Minder/User/Users.txt",ios::app);
    UserData<<User;
    UserData.close();
    cout<<"Account created successfully."<<endl;
}
void SignIn() {
    string SearchEmail, SearchPass;
    ifstream UserFile;
    string line;
    int EmailPosition = 0, PassPosition = 0, EmailMatched = 0, PassMatched = 0;
    UserFile.open("Story Minder/User/Users.txt");
    if (!UserFile) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    cout << "Email : ";
    cin >> SearchEmail;
    cout << "Password : ";
    cin >> SearchPass;
    size_t pos1;
    while (UserFile.good()) {
        getline(UserFile, line);
        pos1 = line.find(SearchEmail);
        EmailPosition++;
        if (pos1 != string::npos) {
            EmailMatched = 1;
            //cout << EmailPosition << endl;
        }
        if (EmailMatched == 1) {
            size_t pos2;
            while (UserFile.good()) {
                getline(UserFile, line);
                pos2 = line.find(SearchPass);
                PassPosition++;
                if (pos2 != string::npos) {
                    PassMatched = 1;
                    //cout << PassPosition << endl;

                }
                if (PassMatched==1 && PassPosition == 1) {
                    cout << "Log in successful" << endl;
                    break;
                }
            }
            if (PassMatched!=1)
            {
                cout << "Log in failed.Wrong Password." << endl;
                break;
            }
        }
    }
    if (EmailMatched == 0)
    {
        cout << "No match found.Please check your email address again." << endl;
        cout << "If you don't have and account sign up first." << endl;
    }
}
int main() {
    int LoginOp;
    UserDirectory();
    UsersFile();
    cout << "Welcome to Story Minder" << endl;
    cout << endl;
    cout << "Select option" << endl;
    cout << "[1]Sign in" << endl;
    cout << "[2]Sign Up" << endl;
    cin >> LoginOp;
    if (LoginOp == 1) {
        cout << "Sign In" << endl;
        SignIn();
    } else if (LoginOp == 2) {
        cout << "Sign Up" << endl;
        SignUp();
    }
    return 0;
}
