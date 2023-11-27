class Node :
    data = 0;
    next = None;

    def __init__(self) :
        self.data = 0;
        self.next = None;

class SinglyLL :
    Head = Node();

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

        temp = Node();
        temp = self.Head;

        if(self.Head == None) :
            self.Head = newn;
        else :
            while(temp.next != None) :
                temp = temp.next;
            temp.next = newn;

    def Display(self) :
        temp = Node();
        temp = self.Head;

        while(temp != None) :
            print("|%d|->"%temp.data,end="");
            temp = temp.next;

    def FirstOcc(self,value) :
        icnt = 1;
        ipos = 0;
        temp = Node();
        temp = self.Head;

        while(temp != None) :
            if(temp.data == value) :
                ipos = icnt;
                break;
            icnt = icnt + 1;
            temp = temp.next;
        
        return ipos;

    def Count(self) :
        icnt = 0;
        temp = Node();
        temp = self.Head;

        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;
        
        return icnt;

def main() :
    iret = 0;
    iret2 = 0;

    print("Jay Ganesh....");

    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(1);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(11);
    sobj.InsertLast(11 );

    print("Elements of Linked List are : ");
    sobj.Display();
    iret = sobj.Count();
    print("\nCount of Elements From Linked List is : ",iret);

    iret2 = sobj.FirstOcc(11);
    print("Last Occurance of Entered Number is at Position : ",iret2);
if __name__ == "__main__" :
    main();