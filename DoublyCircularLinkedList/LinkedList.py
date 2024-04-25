class Node :
    data = 0;
    next = None;
    prev = None;

    def __init__(self) :
        self.data  = 0;
        self.next = None;
        self.prev = None;

class DoublyCLL :
    __Head = None;
    __Tail = None;

    def __init__(self) :
        self.__Head = None;
        self.__Tail = None;
    
    def InsertFirst(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;
        newn.prev = None;

        if((self.__Head == None)and(self.__Tail == None)) :
            self.__Head = newn;
            self.__Tail = newn;
        else :
            newn.next = self.__Head;
            (self.__Head).prev = newn;
            self.__Head = newn;
        (self.__Head).prev = self.__Tail;
        (self.__Tail).next = self.__Head;

    def InsertLast(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;
        newn.prev = None;

        if((self.__Head == None)and(self.__Tail == None)) :
           self.__Head = newn;
           self.__Tail = newn;
        else :
            (self.__Tail).next = newn;
            newn.prev = self.__Tail;
            self.__Tail = newn;
        (self.__Tail).next = self.__Head;
        (self.__Head).prev = self.__Tail;  

    def InsertAtPos(self,value,ipos) :
        i = 0;
        isize = 0;
        newn = None;
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
            newn.prev = temp;
            (temp.next).prev = newn;
            temp.next = newn;

    def Display(self) :
        Head = self.__Head;
        Tail = self.__Tail;

        if((Head == None)and(Tail == None)) :
            return;
        else :
            print("Elements of Linked List are : ");
            while(Head != Tail) :                
                print("|%d|<=>"%Head.data,end = "");
                Head = Head.next;
            print("|%d|<=>"%Head.data,end = "");
            print();

    def DeleteFirst(self) :
        if((self.__Head == None)and(self.__Tail == None)) :
            return;
        elif(self.__Head == self.__Tail) :
            del(self.__Head);
            self.__Head = None;
            self.__Tail = None;
        else :
            self.__Head = (self.__Head).next;
            del((self.__Head).prev);
            (self.__Tail).next = self.__Head;
            (self.__Head).prev = self.__Tail;

    def DeleteLast(self) :
        if((self.__Head == None)and(self.__Tail == None)) :
            return;
        elif(self.__Head == self.__Tail) :
            del(self.__Head);
            self.__Head = None;
            self.__Tail = None;
        else :
            self.__Tail = (self.__Tail).prev;
            del((self.__Tail).next);
            (self.__Tail).next = self.__Head;
            (self.__Head).prev = self.__Tail;

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
            temp2.next.prev = temp;
            del(temp2);
            temp2 = None;
 
    def Count(self) :
        Head = self.__Head;
        Tail = self.__Tail;
        icnt = 0;

        if((Head == None)and(Tail == None)) :
            return;
        else :
            while(Head != Tail) :
                icnt = icnt + 1;                
                Head = Head.next;
            icnt = icnt + 1;

            return icnt;

def main() :
    ino = 0;
    iret = 0;
    ielem = 0;
    ipos = 0;

    print("Jay Ganesh....");

    print("------------------------------Doubly Circular Linked List Demonstration--------------------------");

    dobj = DoublyCLL();

    while(True) :
        print("Select Any One Operation From Below List of Operations : ");
        print("1. Insert Value At First Position.");
        print("2. Insert Value At Last Position.");
        print("3. Insert Value At Given Position.");
        print("4. Display Elements of Linked List.");
        print("5. Count No of Elements Present in Linked List.");
        print("6. Delete Element From First Position.");
        print("7. Delete Element From Last Position.");
        print("8. Delete Element From Given Position.");
        print("0. Exit.");

        print("Enter Your Choice : ");
        ino = int(input());

        if(ino == 1) :
            print("Enter One Value to Insert : ",end = "");
            ielem = int(input());

            dobj.InsertFirst(ielem);
        elif(ino == 2) :
            print("Enter One Value to Insert : ",end = "");
            ielem = int(input());

            dobj.InsertLast(ielem);
        elif(ino == 3) :
            print("Enter One Value to Insert : ",end = "");
            ielem = int(input());

            print("Enter Position To Insert Element At : ",end = "");
            ipos = int(input());

            dobj.InsertAtPos(ielem,ipos);

            pass;
        elif(ino == 4) :
            dobj.Display();
        elif(ino == 5) :
            iret = dobj.Count();

            print("Count of Element Present in Linked List is : ",iret);
        elif(ino == 6) :
            dobj.DeleteFirst();
        elif(ino == 7) :
            dobj.DeleteLast();
        elif(ino == 8) :
            print("Enter Position To Delete Element From : ",end = "");
            ipos = int(input());

            dobj.DeleteAtPos(ipos);
        elif(ino == 0) :
            return;
        else :
            print("Invalid Option Number,Please Enter valid Option Number");

            return;

if __name__ == "__main__" :
    main();