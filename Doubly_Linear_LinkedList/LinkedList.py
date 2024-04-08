class Node :
    data = 0;
    next = None;
    prev = None;

    def __init__(self) :
        self.data = 0;
        self.next = None;
        self.prev = None;
    
class DoublyLL :
    __Head = None;

    def __init__(self) :
        self.__Head = None;

    def InsertFirst(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;
        newn.prev = None;

        if(self.__Head == None) :
            self.__Head = newn;
        else :
            newn.next = self.__Head;
            (self.__Head).prev = newn;
            self.__Head = newn;

    def InsertLast(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;
        newn.prev = None;
        temp = self.__Head;

        if(self.__Head == None) :
            self.__Head = newn;
        else :
            while(temp.next != None) :
                temp = temp.next;
            
            temp.next = newn;
            newn.prev = temp;

    def InsertAtPos(self,value,ipos) :
        isize = 0;
        i = 0;
        temp = self.__Head;

        isize = self.Count();

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
            newn.prev = None;

            for i in range(1,(ipos - 1)) :
                temp = temp.next; 

            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
    
    def DeleteFirst(self) :
        if(self.__Head == None) :
            return;
        elif((self.__Head).next == None) :
            del(self.__Head);
            self.__Head = None;
        else :
            (self.__Head) = (self.__Head).next;
            del((self.__Head).prev);
            (self.__Head).prev = None;
    
    def DeleteLast(self) :
        temp = self.__Head;

        if(self.__Head == None) :
            return;
        elif((self.__Head).next == None) :
            del(self.__Head);
            self.__Head = None;
        else :
            while(temp.next.next != None) :
                temp = temp.next;

            del(temp.next);
            temp.next = None;

    def DeletAtPos(self,ipos) :
        isize = 0;
        i = 0;
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
            temp2.next.prev = temp;
            
            del(temp2);
            temp2 = None;

    def Display(self) : 
        temp = self.__Head;

        print("Elements of Linked List are : ");
        while(temp != None) :
            print("|%d|<=>"%temp.data,end = "");
            temp = temp.next;
        print();

    def Count(self) :
        temp = self.__Head;
        icnt = 0;

        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;
        
        return icnt;

def main() :
    ino = 0;
    ielem = 0;
    ipos = 0;
    iret = 0;

    print("Jay Ganesh....");

    print("----------------------Doubly Linear Linked List Demonstration------------------------");

    dobj = DoublyLL();
    
    while(True) :
        print("---Select Any Operation From List of Operations to Perform on Linked List----");
        print("1. Insert Element At First Position.");
        print("2. Insert Element At Last Position.");
        print("3. Insert Element At Given Position.");
        print("4. Display Elements of Linked List.");
        print("5. Count No of Element Present in Linked List.");
        print("6. Delete Element From First Position.");
        print("7. Delete Element From Last Position.");
        print("8. Delete Element From Given Position.");
        print("0. Exit");

        print("Enter Your Choice in No : ");
        ino = int(input());

        if(ino == 1) :
            print("Enter Element Value to Insert : ");
            ielem = int(input());

            dobj.InsertFirst(ielem);
        elif(ino == 2) :
            print("Enter Element Value to Insert : ");
            ielem = int(input());

            dobj.InsertLast(ielem);
        elif(ino == 3) :
            print("Enter Element Value to Insert : ");
            ielem = int(input());

            print("Enter Position Number, You Want To Insert Element At : ");
            ipos = int(input());

            dobj.InsertAtPos(ielem,ipos);
        elif(ino == 4) : 
            dobj.Display();
        elif(ino == 5) :
            iret = dobj.Count();
            
            print("Count of Elements Present in Linked List is : %d"%iret);
        elif(ino == 6) :
            dobj.DeleteFirst();
        elif(ino == 7) :
            dobj.DeleteLast();
        elif(ino == 8) :
            print("Enter Position Number, You Want To Delete Element From : ");
            ipos = int(input());

            dobj.DeletAtPos(ipos);
        elif(ino == 0) :
            return;
        else :
            print("Invalid Option Number Entered");
            return;

if __name__ == "__main__" :
    main();