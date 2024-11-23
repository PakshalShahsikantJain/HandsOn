"""
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Convert Case of Entered Character...
"""

#####################################################################################################################################

#Function To Convert Case of Entered Character
def Convert(Ch) :
    c = '';

    #Logic To Convert Case of Character
    if((Ch >= 'A')and(Ch <= 'Z')) :
        c = ord(Ch) + 32;
    elif((Ch >= 'a') and (Ch <= 'z')) :
        c = ord(Ch) - 32;

    return chr(c);

#####################################################################################################################################

def main() :
    ch = '';
    cret = '';

    print("Jay Ganesh....");

    print("Enter one character..");
    ch = input();

    print("Entered Character is :",ch);

    #Call To Convert Function
    cret = Convert(ch);
    print("Converted Character is :",cret);

###################################################################################################################################

#Call To Main Function
if __name__ == "__main__" :
    main();