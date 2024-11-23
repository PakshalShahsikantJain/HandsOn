class Node :
    data = 0;
    next = None;

    def __init__(self) :
        self.data = 0;
        self.next = None;
    
class SinglyCL :
    __Head = None;
    __Tail = None;

    def __init__(self) :
        self.__Head = None;
        self.__Tail = None;
    
    def InsertFirst(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;

        if((self.__Head == None)and(self.__Tail == None)) :
            self.__Head = newn;
            self.__Tail = newn;
        else :
            newn.next = self.__Head;
            self.__Head = newn;
        (self.__Tail).next = self.__Head;

    def InsertLast(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;

        if((self.__Head == None)and(self.__Tail == None)) :
            self.__Head = newn;
            self.__Tail = newn;
        else :
            (self.__Tail).next = newn;
            self.__Tail = newn;
        (self.__Tail).next = (self.__Head).next;

    def InsertAtPos(self,value,ipos) :
        isize = 0;
        i = 0;
        isize = self.Count();
        newn = None;
        temp = self.__Head;

        if((ipos < 1)or(ipos > (isize + 1))) :
            return;
        elif(ipos == 1) :
            self.InsertFirst(value);
        elif(ipos == (isize + 1)) :
            self.InsertLast(value);
        else :
            newn = Node();
            newn.data = value;
            newn.next = None;

            for i in range(1,ipos - 1) :
                temp = temp.next;
            
            newn.next = temp.next;
            temp.next = newn;
    
    def DeleteFirst(self) :
        if((self.__Head == None)and(self.__Tail == None)) :   #If Linked List is Empty 
            return;
        elif(self.__Head == self.__Tail) :       #If LinkedLinked List Contains Only One Element
            del(self.__Head);
            self.__Head = None;
            self.__Tail = None;
        else :
            (self.__Head) = (self.__Head).next;
            del(self.__Tail).next;
            (self.__Tail).next = self.__Head;
    
    def DeleteLast(self) :
        temp = self.__Head;

        if((self.__Head == None)and(self.__Tail == None)) :
            return;
        elif(self.__Head == self.__Tail) :
            del(self.__Head);
            self.__Head = None;
            self.__Tail = None;
        else :
            while(temp.next != self.__Tail) :
                temp = temp.next;

            del(self.__Tail);
            self.__Tail = temp;
            (self.__Tail).next = self.__Head;
        
    def DeleteAtPos(self,ipos) :
        i = 0;
        isize = 0;
        temp = self.__Head;
        temp2 = None;

        isize = self.Count();

        if((ipos < 1)or(ipos > isize)) :
            return;
        elif(ipos == 1) :
            self.DeleteFirst();
        elif(ipos == isize) :
            self.DeleteLast();
        else :
            for i in range(1,ipos - 1) :
                temp = temp.next;
            
            temp2 = temp.next;
            temp.next = temp2.next;
            del(temp2);
            temp2 = None;

    def Display(self) :
        temp = self.__Head;

        if((self.__Head == None)and(self.__Tail == None)) :
            return;
        else :
            print("Elements of Linked List are : ");
            while(temp != self.__Tail) :
                print("|%d|<->"%temp.data,end = "");
                temp = temp.next;
            print("|%d|<->"%temp.data,end = "");
            print();
            
    def Count(self) :
        temp = self.__Head;
        icnt = 0;

        if((self.__Head == None)and(self.__Tail == None)) :
            return 0;
        else :
            while(temp != self.__Tail) :
                icnt = icnt + 1;
                temp = temp.next;
            icnt = icnt + 1;
            
            return icnt;

def main() :
    print("Jay Ganesh.....");
    iret = 0;
    ino = 0;
    ielem = 0;

    sobj = SinglyCL();
    print("--------------------------------Singly Circular Linked List Demonstration-----------------------------------");
    while(True) :
        print("Select Any Operaton From Below List of Operations : ");
        print("1. Insert Element At First Position.");
        print("2. Insert Element At Last Position.");
        print("3. Insert Element At Given Position.");
        print("4. Display Elements of Linked List.");
        print("5. Count Elements Present in Linked List.");
        print("6. Delete Element From First Position.");
        print("7. Delete Element From Last Position.");
        print("8. Delete Element From Given Position.");
        print("0. Exit.");

        print("Enter Your Choice : ");
        ino = int(input());

        if(ino == 1) :
            print("Enter Value To Insert : ");
            ielem = int(input());

            sobj.InsertFirst(ielem);
        elif(ino == 2) :
            print("Enter Value To Insert : ");
            ielem = int(input());

            sobj.InsertLast(ielem);
        elif(ino == 3) :
            print("Enter Value To Insert : ");
            ielem = int(input());

            print("Enter Position You Want To Insert Element At : ");
            ipos = int(input());

            sobj.InsertAtPos(ielem,ipos);
        elif(ino == 4) :
            sobj.Display();
        elif(ino == 5) :
            iret = sobj.Count();
            print("Count of Elements Present in Linked List is : ",iret);
        elif(ino == 6) :
            sobj.DeleteFirst();
        elif(ino == 7) :
            sobj.DeleteLast();
        elif(ino == 8) :
            print("Enter Position You Want To Delete Element From : ");
            ipos = int(input());

            sobj.DeleteAtPos(ipos);
        elif(ino == 0) :
            return;
        else :
            print("Invalid Option Number Entered, Please Enter Valid Option");
            return;

if __name__ == "__main__" :
    main();