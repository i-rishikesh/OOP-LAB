//Create a class which allocates the memory for a string through dynamic constructor. Overload the binary + to concatenate two strings and display it./
#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"\n Enter String: ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();
        cout<<"\n\n First String is: ";
        str1.display_string();
        cout<<"\n\n Second String is: ";
        str2.display_string();
        str3=str1+str2;
        cout<<"\n\n Concatenated String is: ";
        str3.display_string();

        return 0;
}
