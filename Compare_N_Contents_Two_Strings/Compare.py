"""
    Author : Pakshal Shashikant Jain
    Date : 15/09/2023
    Program : Write a program which 2 strings from user and check whether first
              N contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Logic Building"
                      10
              Output : TRUE
"""

##################################################################################################################################

#Function To Compare N Contents of Two String
def StrNCmpX(arr,brr,icnt) :
    i = 0;
    j = 0;

    if((arr == None)and(brr == None)) :
        return False;

    #Logic To Compare
    while(((i != len(arr) - 1)and(j != len(brr)- 1))and(icnt != 0)) :
        if(arr[i] != brr[j]) :
            break;
        i = i + 1;
        j = j + 1;
        icnt = icnt - 1;

    if(arr[i] != brr[j]) :
        return False;
    else :
        return True;

###########################################################################################################################
    
#Main Function
def main() :
    bret = False;
    str = " ";
    str2 = " ";
    icnt = 0;

    print("Jay Ganesh....");
    
    #Taking Input from user
    print("Enter First String");
    str = input();

    print("Enter Second String");
    str2 = input();

    print("Enter One Size");
    icnt = int(input());

    #Call To Behaviours of Class
    bret = StrNCmpX(str,str2,icnt);
    if(bret == True) :
        print("First N Contents Of String Are Equal");
    else :
        print("First N Contents of String Are Not Equal");

####################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();