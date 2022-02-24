#include<iostream>

using namespace std;
int main()
{
    string name1,name2,name3;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    if(name1=="vertebrado")
    {

        if(name2=="ave")
        {

            if(name3=="carnivoro")
            {
                cout<<"aguia"<<endl;
            }
            else if(name3=="onivoro")
            {
                cout<<"pomba"<<endl;
            }
        }
        else if(name2=="mamifero")
        {

            if(name3=="onivoro")
            {
                cout<<"homem"<<endl;
            }
            else if(name3=="herbivoro")
            {
                cout<<"vaca"<<endl;
            }
        }

    }
    else if(name1=="invertebrado")
    {

        if(name2=="inseto")
        {

            if(name3=="hematofago")
            {
                cout<<"pulga"<<endl;
            }
            else if(name3=="herbivoro")
            {
                cout<<"lagarta"<<endl;
            }
        }
        else if(name2=="anelideo")
        {

            if(name3=="hematofago")
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(name3=="onivoro")
            {
                cout<<"minhoca"<<endl;
            }
        }
    }
    return 0;

}


