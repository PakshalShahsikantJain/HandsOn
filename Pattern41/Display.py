"""
    Author : Pakshal Shashikant Jain
    Date : 07/10/2023
    Program : Write a program which accept string from user and print below pattern.
    
              Input : "Marvellous"
              Output : m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
"""

#####################################################################################################################################################################

#Function To Print Given Pattern
def Pattern(arr) :
    i = 0;
    j = 0;
    ascii = 0;

    if(arr == None) :
        return;

    #Logic To Print Given Pattern
    print("Printing Below Given Pattern : ");
    for i in range(len(arr)) :
        for j in range(len(arr)) :
            if((arr[j] >= 'A')and(arr[j] <= 'Z')) :
                ascii = ord(arr[j]) + 32;
                arr[j] = chr(ascii);
            print(arr[j],end ="\t");
        print();

################################################################################################################################################

#Main Function
def main() :
    str = " ";
    arr = [];

    print("Jay Ganesh....");

    #Taking Input from user
    print("Enter One String : ");
    str = input();
    arr = list(str);

    #Call To Pattern Function
    Pattern(arr);

#############################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();