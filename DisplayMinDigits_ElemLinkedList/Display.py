class Node :
    data = 0;
    next = 0;

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

        print("Elements of Linked list are : ");
        while(Head != None) :
            print("|%d|->"%Head.data,end = "\t");
            Head = Head.next; 
        print(" ");

    def Count(self) :
        Head = self.Head;
        icnt = 0;

        while(Head != None) :
            icnt = icnt + 1;
            Head = Head.next; 
        
        return icnt;

    def DisplaySmall(self) :
        Head = self.Head;
        iMin = 0;
        iNo = 0;
        Digit = 0;
        
        print("Smallest Digit of All Elements of Linked list are : ");
        while(Head != None) :
            iNo = Head.data;

            iMin = iNo % 10;
            while(iNo != 0) :
                Digit = iNo % 10;
                if(Digit < iMin) :
                    iMin = Digit;
                iNo = iNo // 10;

            print("%d"%iMin,end = "\t");
            iMin = 0;    
            Head = Head.next;

def main() :
    iret = 0;

    print("Jay Ganesh...");

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(131);
    sobj.InsertLast(160);

    sobj.Display();

    iret = sobj.Count();
    print("Count of Elements From Linked List %d"%iret);

    sobj.DisplaySmall();

if __name__ == "__main__" :
    main();