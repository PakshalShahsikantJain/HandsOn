/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class StringPattern
{
    //Characteristics of Class 
    private :
        char *str;

    //Constructor of Class
    public :
        StringPattern(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Print Given pattern
    void Pattern()
    {
        int i = 0;
        int j = 0;
        int icnt = 0;

        if(str == NULL)
        {
            return;
        }

        //Logic To Print Given Pattern
        while(str[icnt] != '\0')
        {
            icnt++;
        }

        cout<<"Printing Given Pattern : \n";
        for(i = 0;i < icnt;i++)
        {
            for(j = 0;j < icnt;j++)
            {
                if((str[j] >= 'a')&&(str[j] <= 'z'))
                {
                    str[j] = str[j] - 32;
                }
                printf("%c\t",str[j]);
            }
            printf("\n");
        }
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    cout<<"Jay ganesh...\n";

    //Taking Input from user
    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);

    //Creating object of StringPattern Class
    StringPattern *sobj = new StringPattern(arr);
    //Call To Behaviour of Class
    sobj->Pattern();

    delete sobj;
    return 0;
}