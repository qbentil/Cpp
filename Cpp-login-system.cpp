#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h> //For Sleep

using namespace std;

//Function to convert string to lowercase
string toLowerCase(string str){
    return str;
}

bool IsLoggedIn()
{
    //string username, password, un, pw;
    string un, pw, fname, lname, gender, email, dob, nationality, username, password, age;
    //int age;
    string path = "C:\\Users/User/Documents/codeblocksProjects/login_system/users/";
    cout << "Enter username: "; cin >> username;
    cout << "Enter passwword: ";cin >> password;

    ifstream read(path+  username + ".txt"); // read user data from userfiles;

    getline(read, un);
    getline(read, pw);
    getline(read, fname);
    getline(read, lname);
    getline(read, gender);
    getline(read, email);
    getline(read, nationality);
    getline(read, age);
    getline(read, dob);


    if(un == username & pw == password)
    {
        cout << "\nWelcome to you dashboard, " << un << endl;
        cout << "\nYour Personal Detils are: \n" << endl;
        cout << "Your First Name: " << fname << endl;
        cout << "Your Last Name: "<< lname << endl;
        cout << "Your Username: " << username<< endl;
        cout << "Your Password: *******" << endl;
        cout << "Your Gender: " << gender<< endl;
        cout << "Your Email: " << email<< endl;
        cout << "Your Natioanlity: " << nationality<< endl;
        cout << "Your Age: " << age<< endl;
        cout << "Your Birth Date: " << dob<< endl;
        return true;
    }
    return false;
}
void Register()
{
        string fname, lname, gender, email, dob, nationality, username, password;
        int age;
        string path = "C:\\Users/User/Documents/codeblocksProjects/login_system/users/";
        cout << "Your First Name: "; cin >> fname;
        cout << "Your Last Name: "; cin >> lname;
        cout << "Your Username: "; cin >> username;
        cout << "Your Password:"; cin >> password;
        cout << "Your Gender: "; cin >> gender;
        cout << "Your Email: "; cin >> email;
        cout << "Your Natioanlity: "; cin >> nationality;
        cout << "Your Age: "; cin >> age;
        cout << "Your Birth Date: "; cin >> dob;

        if(age >= 18){ //Allow Only user who are 18 and Above
            if( toLowerCase(nationality) != "Ghanaian"){ //Allow Only Ghanaians TRo Register
                cout << "\nSorry! This registration is for Ghanaians alone.\n\n";
            }else{
                ofstream file;
                file.open(path +username + ".txt"); // Creating Files with Username

                //Writing User Data in File
                file << username << endl << password << endl;
                file << fname << endl;
                file << lname << endl;
                file << gender << endl;
                file << email << endl;
                file << nationality << endl;
                file << age << endl;
                file << dob << endl;
                file.close();

                cout << "\n\n Account created Successfully!.\n\n";
                sleep(5);//Sleep For 5 seconds
            }

        }else{
            cout << "\nSorry! Your do not qualify you for the registration!.\n\n";
        }


}

int main()
{
    int pc;
    int years;
    cout << "\nStarting Program........." << endl;
    sleep(2);
    cout << "1: Register \n2: Login\n0:Quit Program\nEnter your choice(0-2): "; cin >> pc;

    if(pc == 1)
    {
        Register();
        main(); // restarting Application.
    }else if(pc == 2)
    {
        bool status = IsLoggedIn();
        if(!status)
        {
            cout << "\n\nLogin Failed!" << endl;
            return 0;
        }else
        {
            sleep(5); // sleeping for 5 seconds
            main(); // restarting Application.
            return 1;
        }
    }
    else if(pc == 0)
    {
        cout << "\nQuiting Program.........." << endl;
        return 0;
    } else{
        cout << "\nUnknown Command! Please try again\n";
        main();
    }

    return 0;
}
