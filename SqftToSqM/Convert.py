"""
    Author : Pakshal Jain
    Date : 30/10/2022
    Program : To Convert Entered Sqft To SqM
"""
#####################################################################################################

#Function TO Convert Sqft To SqM
def Convert(No) :
    ans = 0.0;

    ans = No * 0.0929;

    return ans;

######################################################################################################

#Main Function
def main() :
    No = 0;
    ret = 0.0;

    print("Jay Ganesh...");
    
    print("Enter Sqft to Convert into SqM");
    No = int(input());

    #Call TO Conver Function
    ret = Convert(No);

    print("Convert Sqft To SqM is : ",ret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();