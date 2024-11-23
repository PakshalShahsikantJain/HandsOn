class Node :
    data = 0;
    next = None;

    def __init__(self) :
        self.data = 0;
        self.next = 0;

class SinglyLL :
    Head = None;

    def __init__(self) :
        self.Head = None;
    
    def InsertFirst(self,value) :
        newn = Node();  
        newn.data = value;
        newn.next = None;

        if(self.Head == None) :
            self.Head = newn;
        else :
            newn.next = self.Head;
            self.Head = newn;

    def InsertLast(self,value) :
        newn = Node();
        newn.data = value;
        newn.next = None;
        temp = self.Head;

        if(self.Head == None) :
            self.Head = newn;
        else :
            while(temp.next != None) :
                temp = temp.next;
            temp.next = newn;

    def InsertAtPos(self,value,ipos) :
        i = 0;
        isize = 0;
        temp = self.Head;
        newn = None;

        isize = self.CountElem();

        if((ipos < 1)or(ipos > isize + 1)) :
            return;
        elif(ipos == 1) :
            self.InsertFirst(value);
        elif(ipos == (isize + 1)) :
            self.InsertLast(value);
        else :
            newn = Node();
            newn.data = value;

            for i in range(1,ipos - 1) :
                temp = temp.next;
            newn.next = temp.next;
            temp.next = newn;

    def DeleteFirst(self) :
        temp = self.Head;
        if(self.Head != None) :
            self.Head = (self.Head).next;
            temp = None;
    
    def DeleteLast(self) :
        
        temp = self.Head;

        if(self.Head == None) :
            return;
        elif((self.Head).next == None) :
            self.Head = None;
        else :
            while(temp.next.next != None) :
                temp = temp.next;
            temp.next = None;

    def DeleteAtPos(self,ipos) :
        isize = 0;
        i = 0; 
        temp = self.Head;
        temp2 = None;

        isize = self.CountElem();

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
            temp2 = None;

    def Display(self) :
        temp = self.Head;
        print("Elements Of Linked List are : ");
        while(temp != None) :
            print("|%d|->"%temp.data,end = "");
            temp = temp.next;
        print();

    def CountElem(self) :
        icnt  = 0;
        temp = self.Head;

        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;

        return icnt;

def main() :
    iret = 0;
    ipos = 0;
    ino = 0;
    ielem = 0;

    print("Jay Ganesh...\n");

    sobj = SinglyLL();

    while(True) :
        print("--------------------------------Singly Linked List Demonstration---------------------------------------------");
        print("Select Any Option Number From Below List of Operation To Perform On Linked List");
        print("1. Insert Element At First Position");
        print("2. Insert Element At Last Position");
        print("3. Insert Element At Desired Position You Want");
        print("4. Display Elements Present In Linked List");
        print("5. Count Number of Elements Present In Linked List");
        print("6. Delete Element From First Position");
        print("7. Delete Element From Last Position");
        print("8. Delete Element From Position Entered");
        print("0. Exit");

        print("Enter Option Number");
        ino = int(input());

        if(ino == 1) :
            print("Enter Value of Element You Want To Insert : ");
            ielem = int(input());

            sobj.InsertFirst(ielem);
        elif(ino == 2) :
            print("Enter Value of Element You Want To Insert : ");
            ielem = int(input());

            sobj.InsertLast(ielem);
        elif(ino == 3) :
            print("Enter Value of Element You Want To Insert : ");
            ielem = int(input());
            
            print("Enter Position Number You Want To Insert At : ");
            ipos = int(input());

            sobj.InsertAtPos(ielem,ipos);
        elif(ino == 4) :
            
            sobj.Display();
        elif(ino == 5) :
            iret = sobj.CountElem();

            print("Count of Elements Present in Linked List is as Follows :",iret);
        elif(ino == 6) :
            sobj.DeleteFirst();
        elif(ino == 7) :
            sobj.DeleteLast();
        elif(ino == 8) :
            print("Enter Position Number You Want To Delete Element At : ");
            ipos = int(input());

            sobj.DeleteAtPos(ipos);
        elif(ino == 0) :
            return;
        else :
            print("Invalid Option Number Entered. Please Enter Valid Option Number");
            return;

if __name__ == "__main__" :
    main();