"""
    Author : Pakshal Shashikant Jain
    Date : 16/03/2023
    Program : To Print Below Given Pattern 

    Input : iRow = 4 iCol = 4
    Output : 2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10
             1 3 5 7 9 

"""

#Class Declaration 
class Pattern :
    #Characteristics of Class
    No = 0;
    No2 = 0;

    #Constructor of Class
    def __init__(self,no,no2) :
        self.No = no;
        self.No2 = no2;
    
    #Behaviour of Class
    def Display(self) :
        i = 0;
        j = 0;
        k = 1;
        l = 1;
        no = 0;

        #Logic To Pattern 
        print("Printing Below Given Pattern......");
        for i in range(self.No) :
            for j in range(self.No2) :
                if(i % 2 == 0) :
                    no = k * 2;
                    print("%d"%no,end = "\t");
                    k = k + 1;
                else :
                    print("%d"%l,end = "\t");
                    l = l + 2;
            k = 1;
            l = 1;
            print();

#Main Function
def main() :
    No = 0;
    No2 = 0;

    print("Ganapati Bappa Morya...");
    
    #Taking Input From User
    print("Enter Number of Rows You Want...");
    No = int(input());

    print("Enter Number of Columns You Want...");
    No2 = int(input());

    #Creating Object of Pattern 
    pobj = Pattern(No,No2);
    pobj.Display();

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();