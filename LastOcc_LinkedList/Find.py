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

        if(temp == None) :
            temp = newn;
        else :
            while(temp.next != None) :
                temp = temp.next;
            temp.next = newn;

    def LastOcc(self,value) :
        temp = Node();
        temp = self.Head;
        icnt = 1;
        ipos = 0;

        while(temp != None) :
            if(temp.data == value):
                ipos = icnt;
            icnt = icnt + 1;
            temp = temp.next;
        
        return ipos;

    def Count(self) :
        temp = Node();
        temp = self.Head;
        icnt = 0;

        while(temp != None) :
            icnt = icnt + 1;
            temp = temp.next;

        return icnt;

    def Display(self) :
        temp = Node();
        temp = self.Head;

        while(temp != None) :
            print("|%d|->"%temp.data,end = "");
            temp = temp.next;


def main() :
    iret = 0;
    iret2 = 0;

    print("Jay Ganesh....");
    
    sobj = SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(5);
    sobj.InsertLast(101);
    sobj.InsertLast(11);
    sobj.InsertLast(201);

    sobj.Display();
    iret = sobj.Count();
    iret2 = sobj.LastOcc(11);

    print("\nNumber of Elements in Linked List are : %d"%iret);
    print("Last Occurace of Entered Element is at Position Number : %d"%iret2);
    
if __name__ == "__main__" :
    main();