"""
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
"""

#####################################################################################################################################################################

#Function To Print Given Pattern
def Pattern(arr) :
    i = 0;
    j = 0;
    ascii = 0;

    #Logic To Print Given Pattern
    for i in range(len(arr)) :
        for j in range(len(arr)) :
            if((arr[j] >= 'a')and(arr[j] <= 'z')) :
                ascii = ord(arr[j]) - 32;
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