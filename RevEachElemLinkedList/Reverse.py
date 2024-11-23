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

        print("Elements of linked List are as Follows : ");
        while(Head != None) :
            print("|%d|->"%Head.data,end = "");
            Head = Head.next;
        print();

    def Count(self) :
        icnt = 0;
        Head = self.Head;

        while(Head != None) :
            icnt = icnt + 1;
            Head = Head.next;
        
        return icnt;

    def Reverse(self) :
        Head = self.Head;
        irev = 0;
        Digit = 0;
        No = 0;

        print("Output After Reversing Each Elements of Linked list is : ",end = "");
        while(Head != None) :
            No = Head.data;

            while(No != 0) :
                Digit = No % 10;
                irev = (irev * 10) + Digit;
                No = No // 10;
            
            print("|%d|->"%irev,end = "");
            irev = 0;
            Head = Head.next;
    
def main() :
    print("Jay Ganesh....");
    iret = 0;

    sobj = SinglyLL();
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(1212);
    sobj.InsertLast(999983);

    sobj.Display();
    
    iret = sobj.Count();    
    print("Count of Elements of Linked list is : ",iret);

    sobj.Reverse();

if __name__ == "__main__" :
    main();