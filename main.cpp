#include <iostream>
#include <vector>
#include <string>
using namespace std;
string braille1(char pass)
{
    string out="error";
    if(pass=='w'||pass=='W'){out=" *";}
    else if((pass>='k'&&pass<='t')||(pass>='K'&&pass<='T')){pass-=10;}
    else if((pass=='u'||pass=='v')||(pass=='U'||pass=='V')){pass-=20;}
    else if((pass>='x'&&pass<='z')||(pass>='X'&&pass<='Z')){pass-=21;}
    if(pass=='a'||pass=='A'||pass=='1'||pass=='b'||pass=='B'||pass=='2'||pass=='E'||pass=='e'||pass=='5'||
       pass=='h'||pass=='H'||pass=='8'){out="* ";}
    else if(pass=='c'||pass=='C'||pass=='3'||pass=='d'||pass=='f'||pass=='g'||pass=='D'||pass=='G'||pass=='F'||
    pass=='4'||pass=='6'||pass=='7'){out="**";}
    else if(pass=='i'||pass=='j'||pass=='9'||pass=='0'||pass=='I'||pass=='J'){out=" *";}


return out;
}
string braille2(char pass)
{
    string out="error";
    if(pass=='w'||pass=='W'){out="**";}
    else if((pass>='k'&&pass<='t')||(pass>='K'&&pass<='T')){pass-=10;}
    else if((pass=='u'||pass=='v')||(pass=='U'||pass=='V')){pass-=20;}
    else if((pass>='x'&&pass<='z')||(pass>='X'&&pass<='Z')){pass-=21;}
    if(pass=='a'||pass=='A'||pass=='1'||pass=='c'||pass=='C'||pass=='3'){out="  ";}
    else if(pass=='b'||pass=='B'||pass=='2'||pass=='I'||pass=='i'||pass=='9'||pass=='f'||pass=='F'||
    pass=='6'){out="* ";}
    else if(pass=='j'||pass=='0'||pass=='J'||pass=='h'||pass=='H'||pass=='8'||pass=='g'||pass=='G'||pass=='7'){out="**";}
    else if(pass=='D'||pass=='d'||pass=='4'||pass=='E'||pass=='e'||pass=='5'){out=" *";}


return out;
}
string braille3(char pass)
{
    string out="error";
    if(pass=='W'||pass=='w'){out=" *";}
    else if((pass>='a'&&pass<='j')||(pass>='0'&&pass<='9')){out="  ";}
    else if((pass>='k'&&pass<='t')||(pass>='K'&&pass<='T')){out="* ";}
    else if((pass=='u'||pass=='v')||(pass=='U'||pass=='V')){out="**";}
    else if((pass>='x'&&pass<='z')||(pass>='X'&&pass<='Z')){out="**";}
    return out;
}
int main()
{
    cout<<"enter number of your word"<<endl;
    int x=0;
    cin>>x;
    string input="0";
    vector<string>line1;
    vector<string>line2;
    vector<string>line3;
    for(int i=0;i<x;i++)
    {
        cin>>input;
        int y= input.length();
        for(int j=0;j<y;j++)
        {
            if(isupper(input[j])){line1.push_back("  ");line2.push_back("  ");line3.push_back(" *");}
            if(input[j]>='0'&&input[j]<='9'){line1.push_back(" *");line2.push_back(" *");line3.push_back("**");}
            line1.push_back(braille1(input[j]));
            line2.push_back(braille2(input[j]));
            line3.push_back(braille3(input[j]));
        }
            line1.push_back(" ");
            line2.push_back(" ");
            line3.push_back(" ");

    }
    cout<<endl;
    for(int i=0;i<line1.size();i++)
    {
        cout<<line1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<line2.size();i++)
    {
        cout<<line2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<line3.size();i++)
    {
        cout<<line3[i]<<" ";
    }
cout<<endl;
    return 0;
}
