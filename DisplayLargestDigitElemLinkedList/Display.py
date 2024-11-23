class Node :
    data = 0;
    next = None;

    def __init__(self) :
        self.data = 0;
        self.next = None;
    
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

    def Display(self) :
        Head = self.Head;

        print("Elements of Linked List are : ");
        while(Head != None) :
            print("|%d|->"%Head.data,end = "");
            Head = Head.next;  
        print();

    def DisplayLarge(self) :
        Head = self.Head;
        Digit = 0;
        iMax = 0;
        No = 0;

        print("Largest Digits of All Elements of Linked List are : ");
        while(Head != None) :
            No = Head.data;
            while(No != 0) :
                Digit = No % 10;
                if(Digit > iMax) :
                    iMax = Digit;
                No = No // 10;

            print("%d"%iMax,end = "\t");
            iMax = 0;
            Head = Head.next;  
        print();

    def Count(self) :
        Head = self.Head;
        icnt = 0;

        while(Head != None) :
            icnt = icnt + 1;
            Head = Head.next;  
        
        return icnt;

def main() :
    iret = 0;

    print("Jay Ganesh....");

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(511);
    sobj.InsertLast(501);
    sobj.InsertLast(134);

    sobj.Display();
    
    iret = sobj.Count();
    print("Count of Elements From Linked List is : ",iret);

    sobj.DisplayLarge();

if(__name__ == "__main__") :
    main();