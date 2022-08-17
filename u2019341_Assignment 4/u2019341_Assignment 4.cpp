
// u2019341_Assignment 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class AString {
             
public:
     
    AString() {};

    AString(string Str)
    {
        String = Str;

    }

    AString(int length)
    {
        size = length;

    }

    AString(int F, int L)

    {

        First = F;
        Last = L;


    }
    void printStr() {

        cout << String;
    }

    AString operator +(AString &obj)
    {
      
      
        AString temp;

        temp.String = String + obj.String;

        return temp;



    }

    AString operator += (AString& obj)
    {
        
        String = String + obj.String;

        return String;


    }


    AString operator [] (int num)
    {
        AString temp;

        temp.String = String[num];

            return temp;



    }

    AString operator ==(AString& obj)
    {
        if (String == obj.String)

            cout << "The Strings Are Equal" << endl;


        else

            cout << "They Are not Equal" << endl;

        return obj;
    }


    AString operator !=(AString& obj)
    {
        if (String != obj.String)

            cout << "The Strings Are Not Equal" << endl;


        else

            cout << "They Are Equal" << endl;

        return obj;

    }



    AString operator >(AString& obj)
    {
        if (String > obj.String)

            cout << "The left String is greater" << endl;


        else

            cout << "They Right String is greater" << endl;

        return obj;

    }

    AString operator <(AString& obj)
    {
        if (String < obj.String)

            cout << "The left String is smaller" << endl;


        else

            cout << "They Right String is smaller" << endl; 

        return obj;
    }


  
    friend istream& operator >>(istream& input, AString& object)
    {

        input >> object.String;

        return input;

    }


    friend ostream& operator <<(ostream& output, AString& object)
    {

        output<<  object.String;

        return output;


    }

    int substring()
    {
        while (position < Last)
        {
            strcpy_s(Arr, String.c_str());
            POl[position] = Arr[position + First - 1];
                position++;
        }

        Arr[position] = '\0';

        cout << Arr;

        return 0;
    }

    int getsize()
    {
        return size;


    }

private:

    char Arr[50];
    char POl[50];
    int size = 0;
    string String = {};
    int First;
    int Last;
    int position = 0;
           };



int main()
{
    AString a( "ABCDEF" ),b("12345");

    AString c;


    c = a + b;//Addition
    
    cout << endl;
    
    c.printStr();
 
     a += b;//Self Additon

     cout << endl;


     a.printStr();



     AString d = a[1];

     a == b;//checking equality


     a != b;//checking unequality

     a > b;//greater?

     a < b;//lesser?


     cout << "Input First String" << endl;

     cin >> a;


     cout << "Input Second String" << endl;

     cin >> b;

     cout << "Outputting Both Strings" << endl;

     cout << a << "\n" << b << endl;

     cout << "Assign Left String to Right" << endl;

     a = b;

     cout << "Enter Length" << endl;

     int F;


     cin >> F;


     int L;


     cin >> L;

     
     AString S(F, L);//Assiging Length

     S.substring();//ouputting new string
}

